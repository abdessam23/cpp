/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:53:05 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/14 11:29:05 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

template<typename T,typename T2> 
void iter(T array[],const size_t len,T2 f) 
{
    for(size_t i = 0; i < len;i++)
    {
        f(array[i]);
    }
}