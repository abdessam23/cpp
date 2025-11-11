/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:01:12 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 16:02:53 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type(" ")
{
    std::cout << "The WrongAnimal constractor is called!"<< std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other):type(other.type)
{
    std:: cout << "Copy constructor of WrongAnimal " << type << " called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std:: cout << "Copy assignment OP of WrongAnimal " << type << " called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal unknown sound!"<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "The WrongAnimal destructor is called!"<< std::endl;
}