/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:23:09 by abdo              #+#    #+#             */
/*   Updated: 2026/01/01 10:13:35 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <cfloat>

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter&){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&){
    return *this;
}

ScalarConverter::~ScalarConverter(){}


void ScalarConverter::toChar(const std::string& str)
{
    std::cout <<"char: ";
    if (str.length() <= 1 && !isdigit(str[0]))
    {
        if (isprint(str[0]))
            std::cout << str[0]<<"\n";
        else
            std::cout <<"Non displayable" <<"\n";
        return;
    }
    char* end = NULL;
    double n = std::strtod(str.c_str(), &end);
    if ( *end != '\0' || !isNumber(str) || n < 0  || n > 127)
        std::cout<<"impossible" <<"\n";
    else if (!isprint(static_cast<int>(n)))
        std::cout<<"Non displayable" <<"\n";
    else 
        std::cout<<"'" << static_cast<char>(n)<<"'"<<"\n";
} 

bool isvalidlitral(double n, char* end)
{
    if (*end == 'f' && *(end + 1) == '\0')
        ;
    else if (*end != '\0' || *(end-1) == '.')
        return false;
    if (n > INT_MAX  || n < INT_MIN)
       return false;
    return true;
}

void ScalarConverter::toInt(const std::string& str)
{
    std::cout <<"Int: ";
    if (str.length() == 1 && !isdigit(str[0]))
    {
        std::cout << static_cast<int>(str[0])<<"\n";
        return;
    }
    char* end = NULL;
    double n = std::strtod(str.c_str(), &end);
    if (!isvalidlitral(n,end) || str.empty())
    {
        std::cout << "impossible" <<"\n";
        return;
    }
    std::cout << static_cast<int>(n)<<"\n";
}

void ScalarConverter::toFloat(const std::string& str)
{
    std::cout << "Float: ";
        if (str.empty() || str == "f")
        {
            std::cout << "impossible" <<"\n";
            return;
        }
        char* end = NULL;
        double n = std::strtod(str.c_str(), &end);
     
        if (*end == 'f' && *(end + 1) == '\0')
            ;
        else if (*end != '\0' || *(end-1) == '.')
        {
            std::cout << "impossible" <<"\n";
            return;
        }
        if (std::isnan(n))
        {
            std::cout << "nanf" <<"\n";
            return;
        }
        if(std::isinf(n))
        {
            if (isNumber(str))
                std::cout << "impossible" <<"\n";
            else 
                std::cout <<(n<0?"-inff":"inff")<<"\n";
            return;
        }
        float f = static_cast<float>(n);
        if(f == static_cast<int>(n))
        {
            std::cout << f<< ".0f"<<"\n";
        }
        else
            std::cout <<f<<"f"<<"\n";      
}


bool  ScalarConverter::isNumber(const std::string& str)
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
	std::cout << "Double: ";
        if (str.empty() || str == "f")
        {
            std::cout << "impossible"<<"\n";
            return;
        }
        char* end = NULL;
        double n = std::strtod(str.c_str(), &end);
        if (*end == 'f' && *(end + 1) == '\0')
            ;
        else if (*end != '\0' || *(end-1) == '.')
        {
            std::cout << "impossible" <<"\n";
            return;
        }
        if (std::isnan(n))
        {
            std::cout << "nan" <<"\n";
            return;
        }
        if(std::isinf(n))
        {
            if (isNumber(str))
                std::cout << "impossible" <<"\n";
            else 
                std::cout <<(n<0?"-inf":"inf")<<"\n";
            return;
        }
        if(n == static_cast<int>(n))
        {
            std::cout << n<< ".0"<<"\n";
        }
        else
            std::cout <<n<<"\n";
}

void ScalarConverter::convert(std::string str)
{
   ScalarConverter::toChar(str);
   ScalarConverter::toInt(str);
   ScalarConverter::toFloat(str);
   ScalarConverter::toDouble(str); 
}
