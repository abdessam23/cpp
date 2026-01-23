/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe1.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:13:05 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/23 09:42:54 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe1.hpp"

template <typename container>
PmergeMe<container>::PmergeMe(){}
template <typename container>
PmergeMe<container>::PmergeMe(const PmergeMe&){}
template <typename container>
PmergeMe<container>::~PmergeMe(){}

template <typename container>
PmergeMe<container>& PmergeMe<container>::operator=(const PmergeMe<container>& ){return *this;}

template <typename container>
void PmergeMe<container>::intopair(container& a)
{
    for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
            std::swap(a[i],a[i + 1]);
          i++;
    }
}

template <typename container>
void PmergeMe<container>::insertionsort(container& arr)
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

template <typename container>
void PmergeMe<container>::split_element(container& arr)
{
    size_t n = arr.size()/2; 
    size_t size = arr.size();
    container a2(n);
    
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
    container a1(n);
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

template <typename container>
void PmergeMe<container>::sort_pair(container& a)
{
     for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
            std::swap(a[i],a[i + 1]);
          i++;
     }
}

template <typename container>
void PmergeMe<container>::mergeinseert(container& arr)
{
    clock_t time_pro = clock();
    sort_pair(arr);  
    split_element(arr);
    time_pro = clock() - time_pro;
    double n = ((double)(time_pro) / CLOCKS_PER_SEC * 1000000);
    std::cout << "\nTime to process a range of" << arr.size() << " element with std::vector<int>  is : "<< std::fixed << n <<  " us" << std::endl; 

}

// template <typename container>
// void PmergeMe<container>::valid_input(char** arg,container&  arr,container& deq)
// {
//     std::vector<std::string>  str;
//     PmergeMe::fill_string(arg,str);
//     char* end = NULL;
//     for (int i = 0; i < str.size(); i++)
//     {
//         double n = std::strtod(str[i].c_str(), &end);
//         if ((n < 0 || n > INT_MAX) || *end != '\0')
//         {
//             throw std::runtime_error("Error : only positive integers .");
//         }
//         else
//         {
//             arr.push_back(n);
//             deq.push_back(n);
//         }
//     }
// }