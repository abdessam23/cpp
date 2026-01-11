/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:53:05 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/10 11:38:54 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T,typename T2> 
void Iter(T array[],const size_t len,void (f)(T2)) 
{
    for(size_t i = 0; i < len;i++)
    {
        f(array[i]);
    }
}