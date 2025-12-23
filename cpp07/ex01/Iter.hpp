/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:33:47 by abhimi            #+#    #+#             */
/*   Updated: 2025/12/23 11:15:15 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T,int N> 
class Array
{
private:
    T ar[N];
public:
    Array(const T ar[N]);
    Array();
    Array(const Array& other);
    Array operator=(const Array& other);
    ~Array();
};


template<typename T,int N> 
Array(const T ar[N])
{
    
}
template<typename T,int N> 
Array::Array()
{
    
}
template<typename T,int N> 
Array::Array(const Array& other)
{
    
}
template<typename T,int N>
Array::Array operator=(const Array& other)
{

    
}
Array::~Array()
{
    
}

