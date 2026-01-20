/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:03:46 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/20 11:44:52 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
#include <vector>

class PmergeMe
{
private:
    std::vector<int> arr;
    int n;
public:
    PmergeMe();
    PmergeMe(unsigned int n);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();
    void intopair(std::vector<int>& arr);
    
    
};

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::intopair(std::vector<int>& arr)
{
    for (int i = 0; i < n;i++)
    {
        
    }
}