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
bool isNumber(const std::string& str);
bool isNanInf(const std::string& str);
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}



void ScalarConverter::toChar(const std::string& str)
{
    try {
           if (str.length() > 1 && !std::isnan(atof(str.c_str())))
           {
               std::cout << "char : "<< "'*'" <<std::endl;
           }
           else if (str.length() == 1)
          {
            if (isdigit(str[0]) &&  !isprint(atoi(str.c_str())))
                throw std::runtime_error("Non displyable");
            std::cout << "char : "<< str[0] <<std::endl;
          }
           else 
               throw std::runtime_error("Impossible");
    }
    catch(const std::exception& e)
    {
        std::cerr << "char: "<< e.what() << '\n';
    }
} 
void ScalarConverter::toInt(const std::string& str)
{
     try
    {
        if (isNumber(str))
        {
            long n = atol(str.c_str());
            if (n > INT_MAX  || n < INT_MIN)
                throw std::overflow_error("impossible");
            std::cout << "int: "<< n <<std::endl;
        }
        else
             throw std::runtime_error("Impossible");
    }
    catch(const std::exception& e)
    {
            std::cerr<< "int : " << e.what() << "\n";
    }
}

void ScalarConverter::toFloat(const std::string& str)
{
     try
    {
        if (isNumber(str) || isNanInf(str))
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
             throw std::runtime_error("Impossible");
    }
    catch(const std::exception& e)
    {
        std::cerr << "float: "<< e.what() << "\n";
    }
}
bool isNanInf(const std::string& str)
{
    if (str == "nan"  || str == "inf" || str == "-nan"  || str == "-inf")
        return true;
    return false;
}

bool isNumber(const std::string& str)
{
    size_t i = 0;
    int c = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (i  == str.length() || !isdigit(str[i]))
        return false;
    while (i < str.length())
    {
        if (!isdigit(str[i]) && str[i] !='.')
            return false;
        if (str[i] == '.')
            c++;
        i++;
    }
    if (c > 1 || str[str.length() - 1] == '.' )
        return false;
    return true; 
}


void ScalarConverter::toDouble(const std::string& str)
{
    try
    {
        if (isNumber(str) || isNanInf(str))
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
             throw std::runtime_error("Impossible");
    }
    catch(const std::exception& e)
    {
        std::cerr << "Double: "<< e.what() << "\n";
    }
}

void ScalarConverter::convert(std::string str)
{ 
   ScalarConverter::toChar(str);
   ScalarConverter::toInt(str);
   ScalarConverter::toFloat(str);
   ScalarConverter::toDouble(str); 
}
