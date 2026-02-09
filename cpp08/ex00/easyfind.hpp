/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:43:06 by abhimi            #+#    #+#             */
/*   Updated: 2026/02/09 15:11:14 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <exception>

template<typename T> 
typename T::iterator    easyfind(T& a,int value)
{
    typename T::iterator it = std::find(a.begin(),a.end(), value);
    if (it == a.end())
        throw std::runtime_error("Not  found");
    return it;
}

#endif 