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

template<typename T> 
class Array
{
private:
    static  int N;
    T data[N];
    Array();
public:
    Array(const int size);
    Array(const Array& other);
    Array operator=(const Array& other);
    Array operator[](const int index)
    {
        return data[index];
    }
    bool operator!=(Array& arr)
    {
        return data[N] != arr[N];
    }
    ~Array();
};

template<typename T> 
Array<T>::Array(const int size)
{
    Array::N = size;
}

template<typename T> 
Array<T>::Array()
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
        for (int i = 0; i < N ;i++)
        {
            data[i] = other.data[i];
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
    
}

