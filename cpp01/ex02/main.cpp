/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:40:41 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:21:03 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string stringName = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringName;
    std::string& stringREF = stringName;
    
    std::cout << "The memory address of the string variable is : "<< &stringName << std::endl;
    std::cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable is : "<< stringName << std::endl;
    std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;
    return 0;

}