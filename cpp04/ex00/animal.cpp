/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 14:54:30 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal():type(" ")
{
    std::cout << "The animal constractor is called!"<< std::endl;
}
Animal::Animal(const Animal& other):type(other.type)
{
    std:: cout << "Copy constructor of animal " << type << " called" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std:: cout << "Copy assignment OP of animal " << type << " called" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound!"<< std::endl;
}

Animal::~Animal()
{
    std::cout << "The animal destractor is called!"<< std::endl;
}