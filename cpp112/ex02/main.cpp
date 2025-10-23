/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:16 by abdo              #+#    #+#             */
/*   Updated: 2025/09/12 18:55:19 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string &stringREF = str;

    std::cout <<"The memory address of string : "<< &str << std::endl;
    std::cout <<"The memory address held by stringPTR : "<< stringPTR << std::endl;
    std::cout <<"The memory address held by stringREF : "<< &stringREF << std::endl;
    
    std::cout << "=======================================" << std::endl;
    
    std::cout << "Value of the string : "<< str << std::endl;
    std::cout << "Value of pointer to the sting : "<< *stringPTR << std::endl;
    std::cout << "Value of reference to string : "<< stringREF << std::endl;
}