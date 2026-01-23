/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe1.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:10:02 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/23 10:10:19 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe1_HPP
#define PmergeMe1_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <vector>
#include <ctime>
#include <deque>
#include <exception>

template <typename container>
class PmergeMe
{
    private:
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
    public:
        PmergeMe();
        ~PmergeMe();
        void intopair(container& arr);
        void split_element(container& arr);
        void insertionsort(container& arr);
        void sort_pair(container& a);
        double mergeinseert(container& a);
};
void valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq);
void fill_string(char** arg,std::vector<std::string> &str);
#include "PmergeMe1.tpp"

#endif