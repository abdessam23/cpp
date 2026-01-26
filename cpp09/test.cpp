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

// // void merge(std::vector<int>& v,int l,int m,int r)
// // {
// //      int n1 = m - l + 1 ;
// //      int n2 = r - m ;
// //      std::vector<int> c1(n1),c2(n2);

// //      for(int i = 0;i < n1;i++)
// //      {
// //           c1[i] = v[l + i];
// //      }
// //      for(int i = 0;i < n2;i++)
// //      {
// //           c2[i] = v[m + i  + 1];
// //      }
// //      int i = 0;
// //      int j = 0;
// //      int k = l;
// //      while (i < n1 && j < n2)
// //      {
// //           if (c1[i] <= c2[j])
// //           {
// //                v[k] = c1[i];
// //                i++;
// //           }
// //           else
// //           {
// //                v[k] = c2[j];
// //                j++;
// //           }
// //           k++;
// //      }
// //      while (i < n1)
// //      {
// //          v[k] = c1[i];
// //          i++;
// //          k++;
// //      }
// //      while (j < n2)
// //      {
// //          v[k] = c2[j];
// //          j++;
// //          k++;
// //      }
// // }

// // void mergsort(std::vector<int>& a,int left,int right)
// // {
// //      if(left >= right)
// //           return;
// //     static int n = 0;
// //     n++;
// //      std::cout << "arr "<< n << " : ";
// //      for (int i = 0;i < a.size();i++)
// //      {
// //           std::cout << a[i] << " ";
// //      }
// //       std::cout << "\n";
// //      int middle = left + (right - left)/2;
// //      mergsort(a,left,middle);
// //      mergsort(a,middle + 1, right);
// //      merge(a,left,middle,right);
// // }

// void intopair(std::vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (i + 1 < a.size() && a[i] > a[i + 1])
//         {
//             int tmp;
//             tmp = a[i];
//             a[i] = a[i + 1];
//             a[i + 1] = tmp;
//         }
//         i++;
//     }
// }

// void insertionsort(std::vector<int> &arr)
// {
//     for (int i = 1; i < arr.size(); i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

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

// void split_element(std::vector<int> &arr)
// {
//     if (arr.size()  < 2)
//         return; 
//     size_t n = arr.size() / 2;
//     size_t size = arr.size();
//     std::vector<int> a2(n);

//     int j = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (i % 2 != 0 && j < n)
//         {
//             a2[j] = arr[i];
//             j++;
//         }
//     }
//     j = 0;
//     if (size % 2 != 0)
//         n += 1;
//     std::vector<int> a1(n);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (i % 2 == 0 && j < n)
//         {
//             a1[j] = arr[i];
//             j++;
//         }
//     }
//     if (size % 2 != 0)
//         a1[n] = arr[size];
//     insertionsort(a2);
//     for (int i = 0; i < a1.size(); i++)
//     {
//         int s = binarySearch(a2, a1[i], 0, a2.size() - 1);
//         a2.insert(a2.begin() + s, a1[i]);
//     }
//     arr = a2;
// }
 


// void sort_pair(std::vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (i + 1 < a.size() && a[i] > a[i + 1])
//         {
//             int tmp;
//             tmp = a[i];
//             a[i] = a[i + 1];
//             a[i + 1] = tmp;
//         }
//         i++;
//     }
// }

// // {4,1,3,5,6,2,8,0}
// // int main()
// // {
// //    std::vector<int> a= {4,1,3,5,6,2,8,0,7};
// //    int n = a.size();
// // //    mergsort(a,0,n);
// //      sort_pair(a);
// //       std::cout << "a : ";
// //     for(int i = 0;i < n;i++)
// //     {
// //         std::cout << a[i] << " ";
// //     }
// //      split_element(a);

// // }

// void fill_string(char **arg, std::vector<std::string> &str)
// {
//     int i = 1;
//     std::string s;
//     std::string tmp;
//     while (arg[i])
//     {
//         s += arg[i];
//         s += " ";
//         i++;
//     }
//     std::stringstream ss(s);
//     while (ss >> tmp)
//     {
//         str.push_back(tmp);
//     }
// }

// int main(int ac, char **arg)
// {
//     if (ac < 2)
//     {
//         std::cerr << "Error please enter one integers or more " << std::endl;
//         return 1;
//     }
//     // if (!check_arg(arg))
//     // {
//     //     std::cerr<< "Invalid input"<< std::endl;
//     //     return 1;
//     // }
//     std::vector<std::string> str;
//     std::vector<int> arr;
//     std::deque<int> deq;
//     fill_string(arg, str);

//     for (int i = 0; i < str.size(); i++)
//     {
//         double n = std::strtod(str[i].c_str(), NULL);
//         if (n < 0 || n > INT_MAX)
//         {
//             std::cerr << "Error : only positive integers ." << std::endl;
//             return 1;
//         }
//         else
//         {
//             arr.push_back(n);
//             deq.push_back(n);
//         }
//     }

//     std::cout << "The array before sorting : ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         std::cout << arr[i] << " ";
//     }
//     sort_pair(arr);
//     split_element(arr);
//     std::cout << "\n\nThe array after sorting : ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         std::cout << arr[i] << " ";
//     }
//     return 0;

// }



// Step 1: Create pairs and sort within each pair (larger first)
void create_and_sort_pairs(std::vector<int> &arr, std::vector<std::pair<int, int>> &pairs, int &straggler)
{
    straggler = -1; // No straggler initially
    
    for (size_t i = 0; i + 1 < arr.size(); i += 2)
    {
        // Compare and put larger element first in pair
        if (arr[i] > arr[i + 1])
            pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
        else
            pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
    }
    
    // Handle odd element (straggler)
    if (arr.size() % 2 != 0)
        straggler = arr[arr.size() - 1];
}

// Step 2: Sort pairs by their larger element (first element of pair)
void sort_pairs_recursive(std::vector<std::pair<int, int>> &pairs)
{
    if (pairs.size() <= 1)
        return;
    
    // Create pairs of pairs for next level
    std::vector<std::pair<std::pair<int,int>, std::pair<int,int>>> meta_pairs;
    int has_straggler_pair = -1;
    
    for (size_t i = 0; i + 1 < pairs.size(); i += 2)
    {
        // Compare pairs by their larger element (first in pair)
        if (pairs[i].first > pairs[i + 1].first)
            meta_pairs.push_back(std::make_pair(pairs[i], pairs[i + 1]));
        else
            meta_pairs.push_back(std::make_pair(pairs[i + 1], pairs[i]));
    }
    
    // Handle odd pair
    if (pairs.size() % 2 != 0)
        has_straggler_pair = pairs.size() - 1;
    
    // Recursively sort meta_pairs...
    // (This gets complex with nested types - see note below)
    
    // For now, simple sort by first element
    std::sort(pairs.begin(), pairs.end(), 
        [](const std::pair<int,int> &a, const std::pair<int,int> &b) {
            return a.first < b.first;
        });
}

// Step 3: Extract main chain and pend chain after sorting
void extract_chains(std::vector<std::pair<int, int>> &pairs, 
                    std::vector<int> &main_chain, 
                    std::vector<int> &pend_chain,
                    int straggler)
{
    for (const auto &p : pairs)
    {
        main_chain.push_back(p.first);   // Larger elements
        pend_chain.push_back(p.second);  // Smaller elements
    }
    
    // Add straggler to pend chain if exists
    if (straggler != -1)
        pend_chain.push_back(straggler);
}

// Putting it all together:
void ford_johnson_sort(std::vector<int> &arr)
{
    if (arr.size() <= 1)
        return;
    
    std::vector<std::pair<int, int>> pairs;
    int straggler;
    
    // Step 1: Create pairs
    create_and_sort_pairs(arr, pairs, straggler);
    
    // Step 2: Sort pairs recursively by larger element
    sort_pairs_recursive(pairs);
    
    // Step 3: Extract chains
    std::vector<int> main_chain, pend_chain;
    extract_chains(pairs, main_chain, pend_chain, straggler);
    
    // Step 4: Insert pend elements into main chain
    // (You'll use your binary search here with Jacobsthal sequence)
    for (int elem : pend_chain)
    {
        int pos = binarySearch(main_chain, elem, 0, main_chain.size() - 1);
        main_chain.insert(main_chain.begin() + pos, elem);
    }
    
    arr = main_chain;
}