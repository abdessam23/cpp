/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:03:46 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/20 12:36:25 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
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
void split_element(std::vector<int>& arr)
{
    size_t n = arr.size()/2; 
    std::vector<int> a1(n);
    std::vector<int> a2(n);
    for(int i = 0;i < n;i++)
    {
        if (i%2 == 0)
        {
            a1[i] = arr[i];
        }
    }
     for(int i = 0;i < n;i++)
    {
        if (i%2 != 0)
        {
            a1[i] = arr[i];
        }
    }
    std::cout << "a1 : ";
    for(int i = 0;i < n;i++)
    {
        std::cout << a1[i] << " ";
    }

    std::cout << "a2 : ";
    for(int i = 0;i < n;i++)
    {
        std::cout << a2[i] << " ";
    }
    
}