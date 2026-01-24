/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templete.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:14:42 by abdo              #+#    #+#             */
/*   Updated: 2026/01/14 11:28:34 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

template <typename T> void swap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T> T min(T a,T b)
{
    return (a < b) ? a : b;
}

template <typename T> T max(T a,T b)
{
    return (a > b) ? a : b; 
}