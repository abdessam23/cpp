/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/27 09:55:45 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp" 



int PmergeMe::binarySearch(std::vector<int> &a, int target, int start, int end)
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

void PmergeMe::create_pairs(std::vector<int>& arr, std::vector<int>& a,std::vector<int>& b,int &odd)
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
        odd = arr[arr.size() - 1];
}

void PmergeMe::merge_insert(std::vector<int>& arr)
{
    if (arr.size() < 2)
        return;
    std::vector<int> main,pend;
    int rem = -1;
    create_pairs(arr,main,pend,rem);
    merge_insert(main);
    
    if (!pend.empty())
    {
        int j = binarySearch(main, pend[0],0, main.size() - 1);
        main.insert(main.begin() + j,pend[0]);
        pend.erase(pend.begin());
    }
    
    size_t k = 3;
    while(jacobsthal(k) <= pend.size()) 
    {
        size_t j_idx = jacobsthal(k) -1;
        size_t j_prev = jacobsthal(k - 1) -1;
        for (int i = j_idx; i > j_prev && i < pend.size();i--)
        {
            int j = binarySearch(main, pend[i],0, main.size() - 1);
            main.insert(main.begin() + j,pend[i]);
            pend.erase(pend.begin() + i);
            // i++;
        }
        k++;
    }
   while(!pend.empty())
    {
        int j = binarySearch(main, pend[0],0, main.size() - 1);
        main.insert(main.begin() + j,pend[0]);
        pend.erase(pend.begin());
    }
    if (rem != -1)
    {
        int j = binarySearch(main, rem,0, main.size() - 1);
        main.insert(main.begin() + j,rem); 
    }
    arr = main;
}

void PmergeMe::create_pairs(std::deque<int>& arr, std::deque<int>& a,std::deque<int>& b,int &odd)
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
        odd = arr[arr.size() - 1];
}

void PmergeMe::merge_insert(std::deque<int>& arr)
{
    if (arr.size() < 2)
        return;
    std::deque<int> main,pend;
    int rem = -1;
    create_pairs(arr,main,pend,rem);
    merge_insert(main);
    
    if (!pend.empty())
    {
        int j = binarySearch(main, pend[0],0, main.size() - 1);
        main.insert(main.begin() + j,pend[0]);
        pend.erase(pend.begin());
    }
    
    size_t k = 3;
    while(jacobsthal(k) <= pend.size())
    {
        size_t j_idx = jacobsthal(k) -1;
        size_t j_prev = jacobsthal(k - 1) -1;
        for (int i = j_idx; i > j_prev && i < pend.size();i--)
        {
            int j = binarySearch(main, pend[i],0, main.size() - 1);
            main.insert(main.begin() + j,pend[i]);
            pend.erase(pend.begin() + i);
            // i++;
        }
        k++;
    }
   while(!pend.empty())
    {
        int j = binarySearch(main, pend[0],0, main.size() - 1);
        main.insert(main.begin() + j,pend[0]);
        pend.erase(pend.begin());
    }
    if (rem != -1)
    {
        int j = binarySearch(main, rem,0, main.size() - 1);
        main.insert(main.begin() + j,rem); 
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

void mergeinsert(std::vector<int>& arr,std::deque<int>& deq)
{
    PmergeMe<std::vector<int> > a;
    PmergeMe<std::deque<int> > d;

    std::cout << "The array before sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << " ";

    double n = d.mergeinseert(deq);
    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << " ";

    std::cout << "\n\nTime to process a range of " 
    << deq.size() << " element with std::deque<int>  is : "<< std::fixed << n <<  " ms";
    
    std::cout << "\nTime to process a range of " 
    << arr.size() << " element with std::vector<int>  is : "<< std::fixed <<  arr.size() <<  " ms" << std::endl; 
}
