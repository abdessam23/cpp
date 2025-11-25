/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:23:09 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 14:33:42 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
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
    try {
        if (str.length() > 1 && !std::isnan(std::atof(str.c_str())))
        {
            std::cout << "char : "<< "'*'" <<std::endl;
        }
        else if (isprint(str[0]) && !isdigit(str[0]) &&  str.length() == 1 )
            std::cout << "char : "<< str[0] <<std::endl;
        else 
            throw(ScalarConverter::convertexcpt());
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "char: "<< e.what() << '\n';
    }
    try
    {
        int n = std::atoi(str.c_str());
        std::cout << "int: "<< n <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::string s = e.what();
        if(s == "stoi")
        {
            std::cerr<< "int : " << "impossible" << '\n';
            
        }
    }

    try
    {
        float n = std::atof(str.c_str());
        if (std::isnan(std::atof(str.c_str())) || std::isinf(std::atof(str.c_str())))
        {
            std::cout << "float: "<< n<<"f"<<std::endl;
        }
        else
            std::cout << "float: "<< n << ".0f"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        double n = std::atof(str.c_str());
        if (std::isnan(std::atof(str.c_str())) || std::isinf(std::atof(str.c_str())))
        {
            std::cout << "double: "<< n<<std::endl;
        }
        else
            std::cout << "double: "<< n <<".0"<<std::endl;
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

