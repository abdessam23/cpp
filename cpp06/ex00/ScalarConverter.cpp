/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:23:09 by abdo              #+#    #+#             */
/*   Updated: 2025/11/24 18:40:19 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if (this != &other)
        *this = other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(std::string str)
{
    // if(str.length() > 1 || isdigit(str[0]))
    // {
    //     std::cout << "Char: "<< "Non displayable." <<std::endl;
    // }
    // else
    //     std::cout << "Char: " << str[0] <<std::endl;
    // for (int i = 0; i <str.length();i++)
    // {
    //     // int n = static_cast<int>(str[i]);
    //     std::cout << "int : " <<str[i] <<std::endl;
    // }
    try
    {
        int n = std::stoi(str);
        std::cout << n <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}

const char* ScalarConverter::convertexcpt::what() const throw()
{
    return "impossible";
}

int main(int ac, char **argv)
{
    if (ac != 2)
        return 1;
    ScalarConverter::convert(argv[1]);
}