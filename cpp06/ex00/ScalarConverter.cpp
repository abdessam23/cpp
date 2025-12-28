/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:23:09 by abdo              #+#    #+#             */
/*   Updated: 2025/12/28 11:03:54 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <cfloat> 
#include <cerrno>

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
    if (str.length() <= 1 && !isdigit(str[0]))
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
        std::cout<<"impossible" <<std::endl;
    else if (!isprint(static_cast<int>(n)))
        std::cout<<"Non displayable" <<std::endl;
    else 
        std::cout<<"'" << static_cast<char>(n)<<"'"<<std::endl;
} 

bool isvalidlitral(double n, char* end)
{
    if (*end == 'f' && *(end + 1) == '\0')
        ;
    else if (*end != '\0')
        return false;
    if (n > INT_MAX  || n < INT_MIN || n != static_cast<int>(n))
       return false;
    return true;
}

void ScalarConverter::toInt(const std::string& str)
{
    std::cout <<"Int: ";
    if (str.length() == 1 && !isdigit(str[0]))
    {
        std::cout << static_cast<int>(str[0])<<std::endl;
        return;
    }
    char* end = NULL;
    double n = std::strtod(str.c_str(), &end);
    if (!isvalidlitral(n,end) || str.empty())
    {
        std::cout << "impossible" <<std::endl;
        return;
    }
    std::cout << static_cast<int>(n)<<std::endl;
}

void ScalarConverter::toFloat(const std::string& str)
{
    std::cout << "Float: ";
        if (str.empty() || str == "f")
        {
            std::cout << "impossible\n";
            return;
        }
        char* end = NULL;
        double n = std::strtod(str.c_str(), &end);
     
        if (*end == 'f' && *(end + 1) == '\0')
            ;
        else if (*end != '\0')
        {
            std::cout << "impossible\n";
            return;
        }
        if (std::isnan(n))
        {
            std::cout << "nanf\n";
            return;
        }
        if(std::isinf(n))
        {
            std::cout <<(n<0?"-inff":"inff")<<std::endl;
            return;
        }
        float f = static_cast<float>(n);
        if(f == static_cast<int>(n))
        {
            std::cout << f<< ".0f"<<std::endl;
        }
        else
            std::cout <<f<<"f"<<std::endl;      
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
            std::cout << "impossible\n";
            return;
        }
        char* end = NULL;
        double n = std::strtod(str.c_str(), &end);
        if (*end == 'f' && *(end + 1) == '\0')
            ;
        else if (*end != '\0')
        {
            std::cout << "impossible\n";
            return;
        }
        if (std::isnan(n))
        {
            std::cout << "nan\n";
            return;
        }
        if(std::isinf(n))
        {
            std::cout <<(n<0?"-inf":"inf")<<std::endl;
            return;
        }
        if(n == static_cast<int>(n))
        {
            std::cout << n<< ".0"<<std::endl;
        }
        else
            std::cout <<n<<std::endl;
}

void ScalarConverter::convert(std::string str)
{ 
   ScalarConverter::toChar(str);
   ScalarConverter::toInt(str);
   ScalarConverter::toFloat(str);
   ScalarConverter::toDouble(str); 
}
