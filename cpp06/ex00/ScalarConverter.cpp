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
    std::cout <<"char: ";
    if (str.length() == 1 && !isdigit(str[0]))
    {
        if (isprint(str[0]))
            std::cout << str[0]<<std::endl;
        else
            std::cout <<"Non displayable" <<std::endl;
        return;
    }
    char* end = NULL;
    double n = std::strtod(str.c_str(), &end);
    if ( *end != '\0' || !isNumber(str) 
                      || n < 0  || n > 127
                      || n != static_cast<int>(n))
        std::cout<<"Impossible" <<std::endl;
    else if (!isprint(static_cast<int>(n)))
        std::cout<<"Non displayable" <<std::endl;
    else 
        std::cout<<"'" << static_cast<char>(n)<<"'"<<std::endl;
} 
void ScalarConverter::toInt(const std::string& str)
{
    std::cout <<"Int: ";
    char* end = NULL;
    double n = std::strtod(str.c_str(), &end);
    if (n > INT_MAX  || n < INT_MIN || !isNumber(str))
    {
        std::cout << "impossible" <<std::endl;
        return;
    }
    std::cout << static_cast<int>(n)<<std::endl;
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
    if (str == "nan"  || str == "inf" || str == "-nan"  || str == "-inf"  
        || str == "-inff" || str == "+inf" || str == "+inff")
        return true;
    return false;
}

bool isNumber(const std::string& str)
{
    size_t i = 0;
    int c = 0;
    while (i < str.length() && str[i] == ' ')
        i++;
    if (i < str.length() && (str[i] == '-' || str[i] == '+'))
        i++;
    if (i  == str.length() || !isdigit(str[i]))
        return false;
    while (i < str.length())
    {
        if (isdigit(str[i]))
        {
            i++;
            continue;
        }
        else if (str[i] == '.')
        {
            if (++c > 1 || i + 1 == str.length() || !isdigit(str[i+ 1]))
                return false;
        }
        else
            break;
        i++;
    }
    while (i < str.length() && str[i] == ' ')
        i++;
    if (i != str.length())
        return false;
    return true; 
}


void ScalarConverter::toDouble(const std::string& str)
{
   
        if (isNumber(str) || isNanInf(str))
        {
            char* end = NULL;
            double n = std::strtod(str.c_str(), &end);
            if (std::isnan(atof(str.c_str())) || std::isinf(atof(str.c_str())) || str.find('.') != std::string::npos)
            {
                std::cout << "double: "<< n<<std::endl;
            }
            else
                std::cout << "double: "<< n <<".0"<<std::endl;   
        }
        else
             std::cerr << "Double: "<<"impossible" << "\n";
    
  
}

void ScalarConverter::convert(std::string str)
{ 
   ScalarConverter::toChar(str);
   ScalarConverter::toInt(str);
   ScalarConverter::toFloat(str);
   ScalarConverter::toDouble(str); 
}
