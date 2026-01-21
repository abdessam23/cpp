/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/21 15:32:50 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
 
PmergeMe::PmergeMe(){}
// PmergeMe::PmergeMe(std::vector<int>& arr,std::deque<int>& deq):arr(arr),deq(deq){} 
// PmergeMe::PmergeMe(std::deque<int>& deq){}
PmergeMe::PmergeMe(const PmergeMe&){}
PmergeMe::~PmergeMe(){}
PmergeMe& PmergeMe::operator=(const PmergeMe&){return *this;}
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
            end = mid - 1;
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
    arr = a2;
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
    arr = a2;
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

void PmergeMe::mergeinseert(std::deque<int>& a)
{
    sort_pair(a);  
    split_element(a);
}
void PmergeMe::mergeinseert(std::vector<int>& arr)
{
    sort_pair(arr);  
    split_element(arr); 
}

void PmergeMe::valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq)
{
     if (!PmergeMe::check_arg(arg))
        throw std::runtime_error("Invalid input");
    std::vector<std::string>  str;
    PmergeMe::fill_string(arg,str);
    for (int i = 0; i < str.size(); i++)
    {
        double n = std::strtod(str[i].c_str(), NULL);
        if (n < 0 || n > INT_MAX)
        {
            throw std::runtime_error("Error : only positive integers .");
        }
        else
        {
            arr.push_back(n);
            deq.push_back(n);
        }
    }
}