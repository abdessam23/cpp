/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:43:06 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/04 11:38:34 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>

template<typename T> 
int    easyfind(T& a,int value)
{
    for(int i = 0;i < a.size();i++)
    {
        if (a[i] == value)
            return i;
    }
    throw std::out_of_range("Not found");
}

#endif 