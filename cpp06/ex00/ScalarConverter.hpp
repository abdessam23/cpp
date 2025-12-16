/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:41:32 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 14:20:49 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <climits>
#include <cstdlib>


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter&);
        ScalarConverter& operator=(const ScalarConverter&);
         ~ScalarConverter();

        static void toInt(const std::string& str);
        static void toFloat(const std::string& str);
        static void toDouble(const std::string& str);
        static void toChar(const std::string& str);
    public:
       
        static void convert(std::string str);  
};

