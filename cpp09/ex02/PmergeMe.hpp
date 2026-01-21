/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:03:46 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/21 12:35:56 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <vector>
#include <deque>


class PmergeMe
{
private:
    std::vector<int> arr;
    std::deque<int> deq;
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
public:
    PmergeMe(std::vector<int>& arr,std::deque<int>& deq);
    // PmergeMe(std::deque<int>& deq);
    ~PmergeMe();
    std::vector<int> getvector() const;
    std::deque<int> getdeque() const;
    void intopair(std::vector<int>& arr);
    void split_element(std::vector<int>& arr);
    void insertionsort(std::vector<int>& arr);
    void sort_pair(std::vector<int>& a);
    int binarySearch(std::vector<int>& a, int target, int start, int end);
    void intopair(std::deque<int>& arr);
    void split_element(std::deque<int>& arr);
    void insertionsort(std::deque<int>& arr);
    void sort_pair(std::deque<int>& a);
    int binarySearch(std::deque<int>& a, int target, int start, int end);
    static void fill_string(char** arg,std::vector<std::string> &str);
    static int check_arg(char **arg);
    static int Is_valid(char* str);
};

#endif