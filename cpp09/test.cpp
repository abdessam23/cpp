
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath> 
#include <ctime>
#include <deque>
#include <exception>
static int count = 0;

int binarySearch(std::vector<int> &a, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        count++;
        if (a[mid] <= target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
    
}

size_t jacobsthal(size_t n)
{
    if (n == 0) return 0;
    size_t power =  (1<< (n + 1));
    return (n%2 == 0)? (power + 1)/ 3: (power - 1)/3;
}
void create_pairs(std::vector<int>& d, 
                           std::vector<int>& a,
                           std::vector<int>& b)
{
    size_t n = d.size();
    size_t half = n / 2;
    
    // Step 1: Pairwise comparison
    for (size_t i = 0; i < half; i++)
    {
        count++;
        if (d[i] > d[i + half])
        {
            a.push_back(d[i]);          // max
            b.push_back(d[i + half]);   // min
        }
        else
        {
            a.push_back(d[i + half]);   // max
            b.push_back(d[i]);          // min
        }
    }
    
    // Handle odd element
    if (n % 2 == 1)
    {
        b.push_back(d[n - 1]);
    }
}

void merge_insert(std::vector<int>& d, std::vector<int>& indices)
{
    size_t n = d.size();
    
    if (n < 2)
        return;
        
    if (n == 2)
    {
        count++;
        if (d[0] > d[1])
        {
            std::swap(d[0], d[1]);
            std::swap(indices[0], indices[1]);
        }
        return;
    }
    
    std::vector<int> a, b, a_indices;
    
    // Step 1: Pairwise comparison
    create_pairs(d, a, b);
    
    // Initialize indices for a
    for (size_t i = 0; i < a.size(); i++)
    {
        a_indices.push_back(i);
    }
    
    // Step 2: Recursion - sort a with indices
    merge_insert(a, a_indices);
    
    // Step 3: Permute b to match sorted a using indices
    std::vector<int> permuted_b;
    for (size_t i = 0; i < a.size(); i++)
    {
        permuted_b.push_back(b[a_indices[i]]);
    }
    // Add straggler if exists
    if (b.size() > a.size())
        permuted_b.push_back(b[b.size() - 1]);
    
    b = permuted_b;
    
    // Step 4: Insertion
    std::vector<int> result;
    
    // Insert b[0] and a[0]
    if (!b.empty())
        result.push_back(b[0]);
    if (!a.empty())
        result.push_back(a[0]);
    
    // Insert remaining a elements
    for (size_t i = 1; i < a.size(); i++)
    {
        result.push_back(a[i]);
    }
    
    size_t k = 2;
    size_t n_half = (n + 1) / 2;  // ⌈n/2⌉
    
    while (jacobsthal(k - 1) < n_half)
    {
        size_t tk = jacobsthal(k);
        size_t tk_prev = jacobsthal(k - 1);
        size_t m_idx = std::min(tk, n_half);
        
        // Find position of a[m-1] in result
        size_t u = tk_prev + m_idx;
        
        // Insert from m down to tk_prev + 1
        for (int i = m_idx - 1; i >= (int)tk_prev; i--)
        {
            if (i < (int)b.size())
            {
                // Binary search in result[0...u-1]
                int pos = binarySearch(result, b[i], 0, u - 1);
                result.insert(result.begin() + pos, b[i]);
                
                // Adjust u: find new position of a[i-1]
                if (i > 0 && i - 1 < (int)a.size())
                {
                    u = 0;
                    for (size_t j = 0; j < result.size(); j++)
                    {
                        if (result[j] == a[i - 1])
                        {
                            u = j + 1;
                            break;
                        }
                    }
                }
            }
        }
        k++;
    }
    
    d = result;
    
    // Update indices to reflect final order
    indices.clear();
    for (size_t i = 0; i < result.size(); i++)
    {
        indices.push_back(i);
    }
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

void valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq)
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
            deq.push_back(n);
            
        }
    }
}

int main(int ac, char** arg)
{
    std::vector<int>  arr;
    std::deque<int>  deq;
    valid_input(arg,arr,deq);
    std::vector<int> indices(arr.size());
    for (size_t i = 0; i < arr.size(); i++)
        indices[i] = i;
    std::cout << "The array before sorting : ";
    for (size_t i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    merge_insert(arr, indices);
    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout << count <<std::endl; 
}