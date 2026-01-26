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


// Generate Jacobsthal numbers
std::vector<size_t> generate_jacobsthal(size_t n)
{
    std::vector<size_t> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    
    size_t next;
    while ((next = jacobsthal[jacobsthal.size() - 1] + 2 * jacobsthal[jacobsthal.size() - 2]) < n)
    {
        jacobsthal.push_back(next);
    }
    
    return jacobsthal;
}

// Generate insertion order using Jacobsthal sequence
std::vector<size_t> get_insertion_order(size_t pend_size)
{
    std::vector<size_t> order;
    std::vector<size_t> jacob = generate_jacobsthal(pend_size + 1);
    
    size_t pos = 3; // Start from J(3) = 3
    while (pos < jacob.size())
    {
        size_t value = jacob[pos];
        
        // Add elements from jacob[pos] down to jacob[pos-1] + 1
        size_t limit = jacob[pos - 1] + 1;
        while (value >= limit && value <= pend_size)
        {
            order.push_back(value - 1); // -1 for 0-based indexing
            value--;
        }
        pos++;
    }
    
    // Add any remaining elements
    for (size_t i = 0; i < pend_size; i++)
    {
        bool found = false;
        for (size_t j = 0; j < order.size(); j++)
        {
            if (order[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
            order.push_back(i);
    }
    
    return order;
}

// Modified Step 4: Insert using Jacobsthal order + binary search
void insert_pend_elements(std::vector<int> &main_chain, std::vector<int> &pend_chain)
{
    if (pend_chain.empty())
        return;
    
    // Get Jacobsthal insertion order
    std::vector<size_t> order = get_insertion_order(pend_chain.size());
    
    // Insert elements in Jacobsthal order
    for (size_t i = 0; i < order.size(); i++)
    {
        size_t pend_idx = order[i];
        int elem = pend_chain[pend_idx];
        
        // Binary search to find insertion position
        int pos = binarySearch(main_chain, elem, 0, main_chain.size() - 1);
        main_chain.insert(main_chain.begin() + pos, elem);
    }
}

// Updated complete sort
void ford_johnson_sort(std::vector<int> &arr)
{
    if (arr.size() <= 1)
        return;
    
    std::vector<int> paired;
    int straggler;
    
    create_pairs(arr, paired, straggler);
    sort_pairs_recursive(paired, 1);
    
    std::vector<int> main_chain, pend_chain;
    extract_chains(paired, main_chain, pend_chain, straggler);
    
    // Use Jacobsthal order for insertion
    insert_pend_elements(main_chain, pend_chain);
    
    arr = main_chain;
}