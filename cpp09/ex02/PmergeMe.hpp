/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:03:46 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/21 09:52:15 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>


class PmergeMe
{
private:
    std::vector<int> arr;
    unsigned int n;
public:
    PmergeMe();
    PmergeMe(unsigned int n);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();
    void intopair(std::vector<int>& arr);
    void split_element(std::vector<int>& arr);
    void insertionsort(std::vector<int>& arr);
    void sort_pair(std::vector<int>& a);
    int binarySearch(std::vector<int>& a, int target, int start, int end);
};

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
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
     if (start >= end) {
          return start;
     }
     int mid = start+(end - start) / 2;
     if (a[mid] < target) {start = mid+1;}
     else {end = mid;}
     return binarySearch(a, target, start, end-1);
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