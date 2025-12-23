/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:33:47 by abhimi            #+#    #+#             */
/*   Updated: 2025/12/23 11:25:15 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T> 
class Array
{
private:
    
    T* data;
    size_t N;
    Array();
public:
    
    Array(const size_t size);
    Array(const Array& other);
    Array operator=(const Array& other);
    Array operator[](const size_t index)
    {
        return data[index];
    }
    bool operator!=(Array& arr) const
    {
        for (int i = 0;i < N;i++)
        {
            if (data[i] != arr.data[i])
                return true;
        }
    }
    ~Array();
};

template<typename T> 
Array<T>::Array(const size_t size):N(size)
{
     data = new T[size];
}

template<typename T> 
Array<T>::Array():N(10)
{
    
}
template<typename T> 
Array<T>::Array(const Array<T>& other)
{
    if (this != &other)
    {
        for (int i = 0; i < N ;i++)
        {
            data[i] = other.data[i];
        }
    }
}
template<typename T>
Array<T> Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
         delete[] data;
         data = new  T[other.N];
        for (int i = 0; i < N ;i++)
        {
            data[i] =  other.data[i];
        }
    }
    return *this;
}

// template<typename T>
// Array<T> Array<T>::operator[](const int index)
// {

// }

template<typename T>
Array<T>::~Array()
{
    delete[] data;
}

