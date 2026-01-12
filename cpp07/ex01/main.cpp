/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:58:21 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/12 08:49:26 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void castfloat(float& n)
{
    n = static_cast<int>(n);
}

void addString(std::string& str)
{
    str += " changed ";
}
void addone(const int& a)
{
    std::cout<<a<<std::endl;
}
int main()
{
    int arr[4] = {1,2,3,5};
    std::string str[3]= {"hello","world","ok"};
   std::cout<<"----------------Array of int -------------- \n\n" ;
    Iter(arr,4,addone);
    std::cout<<"\n\n-------------------String -------------- \n\n";

    Iter(str,3,addString);
    for(size_t i = 0;i < 3;i++)
    {
        std::cout << str[i]<<",";
    }
    std::cout<<" \n\n-------------------Float -------------- \n\n";
    float f[4] = {1.5,7.4,3.9,5.2};
    Iter(f,4,castfloat);
    for(size_t i = 0;i < 4;i++)
    {
        std::cout << f[i]<<",";
    }
    std::cout << "\n\n";
    return 0;
}