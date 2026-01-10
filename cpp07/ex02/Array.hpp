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
        unsigned int N;
        T* data;
    public:
         Array()
        {
            data = new T[0];
        }
        Array(const int size):N(size)
        {
         data = new T[size];
         for(size_t i = 0; i < N;i++)
         {
            data[i] = 0;
         }
        }
        Array(const Array& other):N(other.N),data(new T[other.N])
        {
        if (this != &other)
        {
            for (size_t i = 0; i < N ;i++)
            {
                data[i] =  other.data[i];
            }
        }
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                 N = other.N;
                 delete data;
                 data = new  T[other.N];
                for (size_t i = 0; i < N ;i++)
                {
                    data[i] =  other.data[i];
                }
            }
            return *this;
        }

        T& operator[](unsigned int index) const
        {
            if (index >= N )
                throw std::out_of_range("index out of range");
            return data[index];
        }
        bool operator!=(Array& arr) const
        {
            for (size_t i = 0;i < N;i++)
            {
                if (data[i] != arr.data[i])
                    return true;
            }
        }
        ~Array()
        {
            delete[] data;
        }
};



