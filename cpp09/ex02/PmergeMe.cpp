/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/07 14:01:20 by abhimi           ###   ########.fr       */
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
size_t PmergeMe::jacobsthal(size_t n)
{
    if (n == 0) return 0;
    size_t power =  (1<< (n + 1));
    return (n%2 == 0)? (power + 1)/ 3: (power - 1)/3;
}

void PmergeMe::create_pairs(std::vector<int>& arr, std::vector<int>& a,std::vector<int>& b)
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

void PmergeMe::merge_insert(std::vector<int>& arr)
{
    if (arr.size() < 2)
        return;
    std::vector<int> main,pend;
    create_pairs(arr,main,pend);
    merge_insert(main);
    std::vector<bool> inserted(pend.size(), false);
    if (!pend.empty())
    {
        int j = binarySearch(main, pend[0],0, main.size() - 1);
        main.insert(main.begin() + j,pend[0]);
        inserted[0] = true;
    }
    
    size_t k = 3;
    while(jacobsthal(k) <= pend.size())
    {
        size_t j_idx = jacobsthal(k) -1;
        size_t j_prev = jacobsthal(k - 1) -1;
        for (size_t i = j_idx; i > j_prev && i < pend.size();i--)
        {
            if (!inserted[i])
            {
                int j = binarySearch(main, pend[i],0, main.size() - 1);
                main.insert(main.begin() + j,pend[i]);
                inserted[i] = true;
            }
        }
        k++;
    }
    size_t i = pend.size();
    while(i--> 0)
    {
        if (!inserted[i])
        {
            int j = binarySearch(main, pend[i],0, main.size() - 1);
            main.insert(main.begin() + j,pend[i]);
            inserted[i] = true;
        }
    }
    arr = main;
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

void PmergeMe::merge_insert(std::deque<int>& arr)
{
    if (arr.size() < 2)
        return;
    
    std::deque<int> main,pend;
    create_pairs(arr,main,pend);
    merge_insert(main);
    std::vector<bool> inserted(pend.size(), false);
    if (!pend.empty())
    {
        int j = binarySearch(main, pend[0],0, main.size() - 1);
        main.insert(main.begin() + j,pend[0]);
        inserted[0] = true;
    }
    
    size_t k = 3;
    while(jacobsthal(k) <= pend.size())
    {
        size_t j_idx = jacobsthal(k) -1;
        size_t j_prev = jacobsthal(k - 1) -1;
        for (size_t i = j_idx; i > j_prev && i < pend.size();i--)
        {
            if (!inserted[i])
            {
                int j = binarySearch(main, pend[i],0, main.size() - 1);
                main.insert(main.begin() + j,pend[i]);
                inserted[i] = true;
            }
        }
        k++;
    }
    size_t i = pend.size();
    while(i--> 0)
    {
        if (!inserted[i])
        {
            int j = binarySearch(main, pend[i],0, main.size() - 1);
            main.insert(main.begin() + j,pend[i]);
            inserted[i] = true;
        }
    }
    arr = main;
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
    double n = ((double)(time_pro) / CLOCKS_PER_SEC * 1000);
    return n;
}

double PmergeMe::ft_sort(std::deque<int>& arr)   
{
    clock_t time_pro = clock();
    merge_insert(arr);
    time_pro = clock() - time_pro;
    double n = ((double)(time_pro) / CLOCKS_PER_SEC * 1000);
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
        // t2 = ft_sort(deq);
    }

    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout <<arr[i] << " ";

    std::cout << "\n\nTime to process a range of " 
    << arr.size() << " element with std::vector<int>  is : "<< std::fixed <<t1 <<  " ms";
    
    std::cout << "\nTime to process a range of " 
    << deq.size() << " element with std::deque<int>  is : "<< std::fixed <<t2 <<  " ms" << std::endl;  
}
