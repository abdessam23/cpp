/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:43:06 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/04 11:07:13 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template<typename T,int N> T easyfind(T& a,int index)
{
    if (index < 0 || index a.size())
        throw std::out_of_range("out of bound");
    for(int i = 0;i < a.size();i++)
    {
        if (a[i] == index)
            return i;
    }
    throw std::out_of_range("Not founded");
}