/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:57:29 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/11 13:37:37 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    numbers[0] = 7;
    std::cout << numbers[0] << "\n";
    int* mirror = new int[MAX_VAL];
    srand(time(0));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
       std::cout <<  numbers[i]<<std::endl;
    }
    delete [] mirror;
    return 0;
}
