/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe1.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:50:24 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/21 10:18:27 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template<typename T>
class PmergeMe
{
    private:
        T arr;
        unsigned int n;
    public:
    PmergeMe():n(0),arr(NULL){}
    PmergeMe(unsigned int n):n(n)
    {
        
    }
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();
   
};

// template<typename T>
// PmergeMe::PmergeMe()
// {
    
// }

// template<typename T>
// PmergeMe::PmergeMe(unsigned int n)
// {
    
// }
// template<typename T>
// PmergeMe::PmergeMe(const PmergeMe& other){}
// PmergeMe& PmergeMe::operator=(const PmergeMe& other){}
// PmergeMe::~PmergeMe(){}
