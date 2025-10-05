/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
/*   Updated: 2025/10/05 17:54:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
    std::cout << "The animal constractor is called!"<< std::endl;
}
std::string Animal::getType()
{
    return type;
}
void Animal::makeSound()
{
    if (type == "Cat")
        std::cout << "Meow!"<< std::endl;
    if (type == "Dog")
        std::cout << "Woof!Woof!"<< std::endl;
    else
        std::cout << " "<< std::endl;
}

Animal::~Animal()
{
    std::cout << "The animal destractor is called!"<< std::endl;
}