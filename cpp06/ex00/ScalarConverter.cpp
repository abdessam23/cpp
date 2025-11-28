/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:23:09 by abdo              #+#    #+#             */
/*   Updated: 2025/11/27 17:47:42 by abdo             ###   ########.fr       */
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
        if (str.length() > 1 && !std::isnan(atof(str.c_str())))
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
        if (isdigit(str[0]))
        {
            int n = atoi(str.c_str());
            std::cout << "int: "<< n <<std::endl;
        }
        else
            throw (ScalarConverter::convertexcpt());
    }
    catch(const std::exception& e)
    {
            std::cerr<< "int : " << e.what() << "\n";
    }

    try
    {
        if (isdigit(str[0]) || str == "nan"  || str == "inf" || str == "-nan"  || str == "-inf")
        {
            float n = atof(str.c_str());
            if (std::isnan(atof(str.c_str())) || std::isinf(atof(str.c_str())) || str.find('.') != std::string::npos)
            {
                std::cout << "float: "<< n <<"f"<<std::endl;
            }
            else
                std::cout << "float: "<< n << ".0f"<<std::endl;  
        }
        else
            throw(ScalarConverter::convertexcpt());
    }
    catch(const std::exception& e)
    {
        std::cerr << "float: "<< e.what() << "\n";
    }
    try
    {
        if (isdigit(str[0]) || str == "nan"  || str == "inf" || str == "-nan"  || str == "-inf")
        {
            double n = atof(str.c_str());
            if (std::isnan(atof(str.c_str())) || std::isinf(atof(str.c_str())) || str.find('.') != std::string::npos)
            {
                std::cout << "double: "<< n<<std::endl;
            }
            else
                std::cout << "double: "<< n <<".0"<<std::endl;   
        }
        else
            throw(ScalarConverter::convertexcpt());
    }
    catch(const std::exception& e)
    {
        std::cerr << "Double: "<< e.what() << "\n";
    }
    
    
}

const char* ScalarConverter::convertexcpt::what() const throw()
{
    return "impossible";
}

