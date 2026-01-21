/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/21 12:36:16 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
 
PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(std::vector<int>& arr,std::deque<int>& deq):arr(arr),deq(deq){} 
// PmergeMe::PmergeMe(std::deque<int>& deq){}
PmergeMe::PmergeMe(const PmergeMe&){}
PmergeMe::~PmergeMe(){}
PmergeMe& PmergeMe::operator=(const PmergeMe&){return *this;}
std::vector<int> PmergeMe::getvector() const 
{
    return arr;
}
std::deque<int> PmergeMe::getdeque() const
{
    return deq;
}
void PmergeMe::intopair(std::vector<int>& a)
{
    for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
          {
               int tmp;
               tmp = a[i];
               a[i] = a[i + 1];
               a[i + 1]  = tmp;
          }
          i++;
    }
}

void PmergeMe::insertionsort(std::vector<int>& arr)
{
    for (int i = 1;i<arr.size();i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int PmergeMe::binarySearch(std::vector<int>& a, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (a[mid] <= target)
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

void PmergeMe::split_element(std::vector<int>& arr)
{
    size_t n = arr.size()/2; 
    size_t size = arr.size();
    std::vector<int> a2(n);
    
    int j = 0;
    for(int i = 0;i < arr.size();i++)
    {
        if (i%2 != 0 && j < n)
        {
            a2[j] = arr[i];
            j++;
        } 
    }
    j = 0;
    if (size%2 != 0)
          n+= 1;
    std::vector<int> a1(n);
     for(int i = 0;i < arr.size();i++)
    {
        if (i%2 == 0 && j < n)
        {
            a1[j] = arr[i];
            j++;
        }
    }
    if (size%2 != 0)
          a1[n] = arr[size];
    insertionsort(a2);
    for(int i = 0;i < a1.size();i++)
     {
          int s = binarySearch(a2,a1[i], 0, a2.size()-1);
          a2.insert(a2.begin() + s, a1[i]);
     }
    
    
}

void PmergeMe::sort_pair(std::vector<int>& a)
{
     for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
          {
               int tmp;
               tmp = a[i];
               a[i] = a[i + 1];
               a[i + 1]  = tmp;
          }
          i++;
     }
}


void PmergeMe::intopair(std::deque<int>& a)
{
    for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
          {
               int tmp;
               tmp = a[i];
               a[i] = a[i + 1];
               a[i + 1]  = tmp;
          }
          i++;
    }
}

void PmergeMe::insertionsort(std::deque<int>& arr)
{
    for (int i = 1;i<arr.size();i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int PmergeMe::binarySearch(std::deque<int>& a, int target, int start, int end)
{
     if (start >= end) {
          return start;
     }
     int mid = start+(end - start) / 2;
     if (a[mid] < target) {start = mid+1;}
     else {end = mid;}
     return binarySearch(a, target, start, end-1);
}

void PmergeMe::split_element(std::deque<int>& arr)
{
    size_t n = arr.size()/2; 
    size_t size = arr.size();
    std::deque<int> a2(n);
    
    int j = 0;
    for(int i = 0;i < arr.size();i++)
    {
        if (i%2 != 0 && j < n)
        {
            a2[j] = arr[i];
            j++;
        } 
    }
    j = 0;
    if (size%2 != 0)
          n+= 1;
    std::deque<int> a1(n);
     for(int i = 0;i < arr.size();i++)
    {
        if (i%2 == 0 && j < n)
        {
            a1[j] = arr[i];
            j++;
        }
    }
    if (size%2 != 0)
          a1[n] = arr[size];
    insertionsort(a2);
    for(int i = 0;i < a1.size();i++)
     {
          int s = binarySearch(a2,a1[i], 0, a2.size()-1);
          a2.insert(a2.begin() + s, a1[i]);
     }
    
    
}

void PmergeMe::sort_pair(std::deque<int>& a)
{
     for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
          {
               int tmp;
               tmp = a[i];
               a[i] = a[i + 1];
               a[i + 1]  = tmp;
          }
          i++;
     }
}


int PmergeMe::Is_valid(char* str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]) && str[i] != ' ')
            return 0;
        i++;
    }
    return 1;
}

int PmergeMe::check_arg(char **arg)
{
    int i =1;
    while (arg[i])
    {
       if (!Is_valid(arg[i]))
        return 0;
       i++;
    }
    return 1;
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