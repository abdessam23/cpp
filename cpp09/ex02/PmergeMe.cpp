/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:55:18 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/22 15:36:31 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
 
PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe&){}
PmergeMe::~PmergeMe(){}
PmergeMe& PmergeMe::operator=(const PmergeMe&){return *this;}
void PmergeMe::intopair(std::vector<int>& a)
{
    for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
            std::swap(a[i],a[i + 1]);
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
        int num = std::upper_bound(a2.begin(),a2.end(),a1[i]) - a2.begin();
          a2.insert(a2.begin() + num, a1[i]);
    }
    arr = a2;
}

void PmergeMe::sort_pair(std::vector<int>& a)
{
     for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
            std::swap(a[i],a[i + 1]);
          i++;
     }
}


void PmergeMe::intopair(std::deque<int>& a)
{
    for (int i = 0; i < a.size();i++)
    {
          if (i + 1 < a.size() && a[i] > a[i + 1])
             std::swap(a[i],a[i + 1]);
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
        int num = std::upper_bound(a2.begin(),a2.end(),a1[i]) - a2.begin();
          a2.insert(a2.begin() + num, a1[i]);
     }
    arr = a2;
}

void PmergeMe::sort_pair(std::deque<int>& a)
{
     for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
              std::swap(a[i],a[i + 1]);
          i++;
     }
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
    clock_t time_pro = clock();
    sort_pair(a);  
    split_element(a);
    time_pro = clock() - time_pro;
   double n = (((double)(time_pro) / CLOCKS_PER_SEC)* 1000000);
    std::cout << "\nTime to process a range of " << a.size() 
    << " element with std::deque<int>  is : "
    << std::fixed << n 
    <<  " us" << std::endl; 

}
void PmergeMe::mergeinseert(std::vector<int>& arr)
{
    clock_t time_pro = clock();
    sort_pair(arr);  
    split_element(arr);
    time_pro = clock() - time_pro;
    double n = ((double)(time_pro) / CLOCKS_PER_SEC * 1000000);
    std::cout << "\nTime to process a range of" << arr.size() << " element with std::vector<int>  is : "<< std::fixed << n <<  " us" << std::endl; 

}

void PmergeMe::valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq)
{
    std::vector<std::string>  str;
    PmergeMe::fill_string(arg,str);
    char* end = NULL;
    for (int i = 0; i < str.size(); i++)
    {
        double n = std::strtod(str[i].c_str(), &end);
        if ((n < 0 || n > INT_MAX) || *end != '\0')
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