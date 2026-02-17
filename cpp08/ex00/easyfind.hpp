/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:43:06 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/17 09:58:32 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <exception>

template<typename T> 
int    easyfind(T& a,int value)
{
    typename T::iterator it = std::find(a.begin(),a.end(), value);
    if (it == a.end())
    {
        std::cout << "Not  found" << std::endl;
        return -1;
    }
    return std::distance(a.begin(), it);
} 

template<typename T> 
int    easyfind(const T& a,int value)
{
    typename T::const_iterator it = std::find(a.begin(),a.end(), value);
    if (it == a.end())
     {
        std::cout << "Not  found" << std::endl;
        return -1;
    }
    return std::distance(a.begin(), it);
} 

#endif 