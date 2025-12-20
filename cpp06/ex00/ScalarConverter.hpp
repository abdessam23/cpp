/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:41:32 by abdo              #+#    #+#             */
/*   Updated: 2025/12/20 10:38:41 by abhimi           ###   ########.fr       */
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
        static bool isNumber(const std::string& str);
        static void toInt(const std::string& str);
        static void toFloat(const std::string& str);
        static void toDouble(const std::string& str);
        static void toChar(const std::string& str);
    public:
        static void convert(std::string str);  
};

