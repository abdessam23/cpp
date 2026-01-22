/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:03:46 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/22 15:36:43 by abhimi           ###   ########.fr       */
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
#include <ctime>
#include <deque>
#include <exception>


class PmergeMe
{
    private:
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
    public:
        PmergeMe();
        ~PmergeMe();
        void intopair(std::vector<int>& arr);
        void split_element(std::vector<int>& arr);
        void insertionsort(std::vector<int>& arr);
        void sort_pair(std::vector<int>& a);
        void intopair(std::deque<int>& arr);
        void split_element(std::deque<int>& arr);
        void insertionsort(std::deque<int>& arr);
        void sort_pair(std::deque<int>& a);
        void mergeinseert(std::deque<int>& a);
        void mergeinseert(std::vector<int>& a);
        static void valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq);
        static void fill_string(char** arg,std::vector<std::string> &str);
};

#endif