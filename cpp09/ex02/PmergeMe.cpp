/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/03/11 23:55:49 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp" 



PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe&){}
PmergeMe& PmergeMe::operator=(const PmergeMe&){ return *this;}
PmergeMe::~PmergeMe(){}

int PmergeMe::count = 0;

bool is_sorted(std::vector<int>& arr)
{
    for (size_t i = 0; i < arr.size() - 1;i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int PmergeMe::binarySearch(std::vector<int> &a, int target, int start, int end)
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


int PmergeMe::binarySearch(std::deque<int> &a, int target, int start, int end)
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
// size_t PmergeMe::jacobsthal(size_t n)
// {
//     if (n == 0) return 0;
//     size_t power =  (1<< (n + 1));
//     return (n%2 == 0)? (power + 1)/ 3: (power - 1)/3;
// }

size_t PmergeMe::jacobsthal(size_t n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    size_t prev2 = 0, prev1 = 1, curr = 0;
    for (size_t i = 2; i <= n; i++)
    {
        curr  = prev1 + 2 * prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

void PmergeMe::create_pairs(std::vector<int>& arr, std::vector<int>& a,std::vector<int>& b)
{
    for(size_t i = 0; i + 1 <arr.size();i+=2)
    {
        count++;
        if (arr[i] < arr[i + 1])
        {
            a.push_back(arr[i + 1]);
            b.push_back(arr[i]);
        }
        else
        {
            a.push_back(arr[i]);
            b.push_back(arr[i + 1]);
        }
    }
    if(arr.size()% 2 != 0)
       b.push_back(arr[arr.size() - 1]);
}

void PmergeMe::merge_insert(std::vector<int>& d)
{
    int n = d.size();
    
    if (n < 2)
        return;   
    std::vector<int> a, b;
    create_pairs(d, a, b);
    std::vector<std::pair<int, int> > mapping;
    for (size_t i = 0; i < a.size(); i++)
    {
        mapping.push_back(std::make_pair(a[i], b[i]));
    }
    
    int straggler = -1;
    bool has_straggler = (b.size() > a.size());
    if (has_straggler)
    {
        straggler = b[b.size() - 1];
    }
     
    merge_insert(a);
   
    std::vector<int> new_b;
    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < mapping.size(); j++)
        {
            if (mapping[j].first == a[i])
            {
                new_b.push_back(mapping[j].second);
                break;
            }
        }
    }
    
    if (has_straggler)
    {
        new_b.push_back(straggler);
    }
    b = new_b;
    std::vector<int> result;
    std::vector<bool> b_inserted(b.size(), false);

    if (!b.empty())
    {
        result.push_back(b[0]);
        b_inserted[0] = true;
    }
    

    for (size_t i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
    }
    

    std::vector<int> a_positions(a.size());
    for (size_t i = 0; i < a.size(); i++)
    {
        a_positions[i] = i + 1;
    }
    
    int k = 2;
    int ceil_n_half = (n + 1) / 2;
    
    while ((int)jacobsthal(k - 1) < ceil_n_half)
    {
        int tk = jacobsthal(k);
        size_t tk_prev = jacobsthal(k - 1);
        int m = std::min(tk, ceil_n_half);
        
        for (size_t i = m - 1; i >= tk_prev; i--)
        {
            if (i < b.size() && !b_inserted[i])
            {
       
                int search_start = 0;
                int search_end;
                
                if (i < a_positions.size())
                {
                   
                    search_end = a_positions[i] - 1;
                }
                else
                {
                    
                    search_end = result.size() - 1;
                }
                
                
                if (search_end < search_start)
                {
                    result.insert(result.begin(), b[i]);
                    b_inserted[i] = true;
                    
                    for (size_t j = 0; j < a_positions.size(); j++)
                        a_positions[j]++;
                }
                else
                {
                    int pos = binarySearch(result, b[i], search_start, search_end);
                    result.insert(result.begin() + pos, b[i]);
                    b_inserted[i] = true;
                    
                    for (size_t j = 0; j < a_positions.size(); j++)
                    {
                        if (a_positions[j] >= pos)
                            a_positions[j]++;
                    }
                }
            }
        }
        
        k++;
    }
    

    for (size_t i = 0; i < b.size(); i++)
    {
        if (!b_inserted[i])
        {
            int search_start = 0;
            int search_end;
            
            if (i < a_positions.size())
            {
                search_end = a_positions[i] - 1;
            }
            else
            {
                search_end = result.size() - 1;
            }
            
            if (search_end < search_start)
            {
                result.insert(result.begin(), b[i]);
                
                for (size_t j = 0; j < a_positions.size(); j++)
                    a_positions[j]++;
            }
            else
            {
                int pos = binarySearch(result, b[i], search_start, search_end);
                result.insert(result.begin() + pos, b[i]);
                
                for (size_t j = 0; j < a_positions.size(); j++)
                {
                    if (a_positions[j] >= pos)
                        a_positions[j]++;
                }
            }
        }
    }
    
    d = result;
}

void PmergeMe::create_pairs(std::deque<int>& arr, std::deque<int>& a,std::deque<int>& b) 
{
    for(size_t i = 0; i + 1 <arr.size();i+=2)
    {
        if (arr[i] < arr[i + 1])
        {
            a.push_back(arr[i + 1]);
            b.push_back(arr[i]);
        }
        else
        {
            a.push_back(arr[i]);
            b.push_back(arr[i + 1]);
        }
    }
    if(arr.size()% 2 != 0)
        b.push_back(arr[arr.size() - 1]);
}

void PmergeMe::merge_insert(std::deque<int>& d)
{
    int n = d.size();
    
    if (n < 2)
        return;   
    std::deque<int> a, b;
    create_pairs(d, a, b);
    std::deque<std::pair<int, int> > mapping;
    for (size_t i = 0; i < a.size(); i++)
    {
        mapping.push_back(std::make_pair(a[i], b[i]));
    }
    
    int straggler = -1;
    bool has_straggler = (b.size() > a.size());
    if (has_straggler)
    {
        straggler = b[b.size() - 1];
    }
     
    merge_insert(a);
   
    std::deque<int> new_b;
    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < mapping.size(); j++)
        {
            if (mapping[j].first == a[i])
            {
                new_b.push_back(mapping[j].second);
                break;
            }
        }
    }
    
    if (has_straggler)
    {
        new_b.push_back(straggler);
    }
    
    b = new_b;
    std::deque<int> result;
    std::vector<bool> b_inserted(b.size(), false);

    if (!b.empty())
    {
        result.push_back(b[0]);
        b_inserted[0] = true;
    }
    

    for (size_t i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
    }
    

    std::deque<int> a_positions(a.size());
    for (size_t i = 0; i < a.size(); i++)
    {
        a_positions[i] = i + 1;
    }
    
    int k = 2;
    int ceil_n_half = (n + 1) / 2;
    
    while ((int)jacobsthal(k - 1) < ceil_n_half)
    {
        int tk = jacobsthal(k);
        size_t tk_prev = jacobsthal(k - 1);
        int m = std::min(tk, ceil_n_half);
        
        for (size_t i = m - 1; i >= tk_prev; i--)
        {
            if (i < b.size() && !b_inserted[i])
            {
       
                int search_start = 0;
                int search_end;
                
                if (i < a_positions.size())
                {
                   
                    search_end = a_positions[i] - 1;
                }
                else
                {
                    
                    search_end = result.size() - 1;
                }
                
                
                if (search_end < search_start)
                {
                    result.insert(result.begin(), b[i]);
                    b_inserted[i] = true;
                    
                    for (size_t j = 0; j < a_positions.size(); j++)
                        a_positions[j]++;
                }
                else
                {
                    int pos = binarySearch(result, b[i], search_start, search_end);
                    result.insert(result.begin() + pos, b[i]);
                    b_inserted[i] = true;
                    
                    for (size_t j = 0; j < a_positions.size(); j++)
                    {
                        if (a_positions[j] >= pos)
                            a_positions[j]++;
                    }
                }
            }
        }
        
        k++;
    }
    

    for (int i = 0; i < (int)b.size(); i++)
    {
        if (!b_inserted[i])
        {
            int search_start = 0;
            int search_end;
            
            if (i < (int)a_positions.size())
            {
                search_end = a_positions[i] - 1;
            }
            else
            {
                search_end = result.size() - 1;
            }
            
            if (search_end < search_start)
            {
                result.insert(result.begin(), b[i]);
                
                for (int j = 0; j < (int)a_positions.size(); j++)
                    a_positions[j]++;
            }
            else
            {
                int pos = binarySearch(result, b[i], search_start, search_end);
                result.insert(result.begin() + pos, b[i]);
                
                for (int j = 0; j < (int)a_positions.size(); j++)
                {
                    if (a_positions[j] >= pos)
                        a_positions[j]++;
                }
            }
        }
    }
    
    d = result;
}

void PmergeMe::fill_string(char** arg,std::vector<std::string> &str)
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


void PmergeMe::valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq)
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

double PmergeMe::ft_sort(std::vector<int>& arr)   
{
    clock_t time_pro = clock();
    merge_insert(arr);
    time_pro = clock() - time_pro;
    double n = ((double)(time_pro) / CLOCKS_PER_SEC * 1000000);
    return n;
}

double PmergeMe::ft_sort(std::deque<int>& arr)   
{
    clock_t time_pro = clock();
    merge_insert(arr);
    time_pro = clock() - time_pro;
    double n = ((double)(time_pro) / CLOCKS_PER_SEC * 1000000);
    return n;
}

void PmergeMe::mergeinsert(std::vector<int>& arr,std::deque<int>& deq)
{
    double t1,t2 = 0;
    if (arr.empty())
    {
        std::cerr << "there is no element\n";
        return;  
    }
    std::cout << "The array before sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << " ";
        
    if (!is_sorted(arr)) 
    {
        t1 = ft_sort(arr);
        t2 = ft_sort(deq);
    }

    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout <<arr[i] << " ";

    std::cout << "\n\nTime to process a range of " 
    << arr.size() << " element with std::vector<int>  is : "<< std::fixed <<t1 <<  " us";
    
    std::cout << "\nTime to process a range of " 
    << deq.size() << " element with std::deque<int>  is : "<< std::fixed <<t2 <<  " us" << std::endl;  
}
