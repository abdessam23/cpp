/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:10:02 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/27 09:58:38 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath> 
#include <ctime>
#include <deque>
#include <exception>

class PmergeMe
{
    private:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
    public:
        static int count;
        ~PmergeMe();
        static size_t jacobsthal(size_t n);
        static int binarySearch(std::deque<int> &a, int target, int start, int end);
        static void create_pairs(std::deque<int>& arr, std::deque<int>& a,std::deque<int>& b,int &odd);
        static void merge_insert(std::deque<int>& arr);

        static int binarySearch(std::vector<int> &a, int target, int start, int end);
        static void create_pairs(std::vector<int>& arr, std::vector<int>& a,std::vector<int>& b,int &odd);
        static void merge_insert(std::vector<int>& arr);
        static void valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq); 
        static void fill_string(char** arg,std::vector<std::string> &str);
      
        static double ft_sort(std::vector<int>& a);
        static double ft_sort(std::vector<int>& a);
        
};

void mergeinsert(std::vector<int>& arr,std::deque<int>& deq);

#include "PmergeMe.tpp" 

#endif