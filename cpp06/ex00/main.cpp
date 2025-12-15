/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:51:39 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 11:52:34 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int  check_arg(const std::string str)
{
    
}

int main(int ac, char **argv)
{
    if (ac != 2)
        return 1;
    check_arg(argv[1]);
    ScalarConverter::convert(argv[1]);
}