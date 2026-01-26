
#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <climits>
#include <algorithm>

// Step 1: Create pairs and sort within each pair (larger first)
void create_pairs(std::vector<int> &arr, std::vector<int> &paired, int &straggler)
{
    paired.clear();
    straggler = -1;
    
    for (size_t i = 0; i + 1 < arr.size(); i += 2)
    {
        // Put larger element first, then smaller
        if (arr[i] > arr[i + 1])
        {
            paired.push_back(arr[i]);     // larger
            paired.push_back(arr[i + 1]); // smaller
        }
        else
        {
            paired.push_back(arr[i + 1]); // larger
            paired.push_back(arr[i]);     // smaller
        }
    }
    
    // Handle odd element
    if (arr.size() % 2 != 0)
        straggler = arr[arr.size() - 1];
}


int binarySearch(std::vector<int> &a, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (a[mid] <= target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
    
}

// Step 2: Recursively sort pairs (treating every 2 elements as a pair)
void sort_pairs_recursive(std::vector<int> &paired, size_t pair_size)
{
    // Base case: if only one pair or less
    if (paired.size() <= pair_size * 2)
        return;
    // Number of pairs at this level
    size_t num_pairs = paired.size() / (pair_size * 2);
    
    // Sort pairs by comparing their first element (the larger one)
    for (size_t i = 0; i < num_pairs - 1; i++)
    {
        for (size_t j = 0; j < num_pairs - i - 1; j++)
        {
            size_t idx1 = j * pair_size * 2;       // First pair's start
            size_t idx2 = (j + 1) * pair_size * 2; // Second pair's start
            
            // Compare the larger elements of each pair
            if (paired[idx1] > paired[idx2])
            {
                // Swap entire pairs
                for (size_t k = 0; k < pair_size * 2; k++)
                {
                    std::swap(paired[idx1 + k], paired[idx2 + k]);
                }
            }
        }
    }
    
    // Recurse with doubled pair size (pairs of pairs)
    sort_pairs_recursive(paired, pair_size * 2);
}

// Step 3: Extract main chain and pend chain
void extract_chains(std::vector<int> &paired, 
                    std::vector<int> &main_chain, 
                    std::vector<int> &pend_chain,
                    int straggler)
{
    main_chain.clear();
    pend_chain.clear();
    
    // Extract every pair: even indices = larger (main), odd indices = smaller (pend)
    for (size_t i = 0; i < paired.size(); i += 2)
    {
        main_chain.push_back(paired[i]);     // larger element
        pend_chain.push_back(paired[i + 1]); // smaller element
    }
    
    // Add straggler to pend if exists
    if (straggler != -1)
        pend_chain.push_back(straggler);
}

// Complete Ford-Johnson sort
void ford_johnson_sort(std::vector<int> &arr)
{
    if (arr.size() <= 1)
        return;
    
    std::vector<int> paired;
    int straggler;
    
    // Step 1: Create pairs (larger, smaller, larger, smaller, ...)
    create_pairs(arr, paired, straggler);
    
    // Step 2: Recursively sort pairs
    sort_pairs_recursive(paired, 1); // Start with pair_size = 1
    
    // Step 3: Extract chains
    std::vector<int> main_chain, pend_chain;
    extract_chains(paired, main_chain, pend_chain, straggler);
    
    // Step 4: Insert pend elements into main chain using binary search
    for (int elem : pend_chain)
    {
        int pos = binarySearch(main_chain, elem, 0, main_chain.size() - 1);
        main_chain.insert(main_chain.begin() + pos, elem);
    }
    
    arr = main_chain;
}

void fill_string(char** arg,std::vector<std::string> &str)
{
    int i = 1;
    std::string s;
    std::string tmp;
    while (arg[i])
    {
       s += arg[i] ; 
       s += " ";
       i++;
    }
    std::stringstream ss(s); 
    while(ss >>tmp)
    {
        str.push_back(tmp);
    }
}


void valid_input(char** arg,std::vector<int>&  arr)
{
    std::vector<std::string>  str;
    fill_string(arg,str);
    char* end = NULL;
    for (size_t i = 0; i < str.size(); i++)
    {
        double n = std::strtod(str[i].c_str(), &end);
        if ((n < 0 || n > INT_MAX) || *end != '\0')
        {
            throw std::runtime_error("Error : only positive integers.");
        }
        else
        {
            arr.push_back(n);

        }
    }
}


int main(int ac, char**arg)
{
    std::vector<int> b;
    valid_input(arg,b);
    ford_johnson_sort(b);
    for (int i ;i < b.size();i++)
    {
        std::cout << b[i] << " ";
    }
    std::cout << "\n";
}