/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 14:43:19 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():type("")
{
    std::cout << "The AAnimal constractor is called!"<< std::endl;
}
AAnimal::AAnimal(const AAnimal& other):type(other.type)
{
    std:: cout << "Copy constructor of AAnimal " << type << " called" << std::endl;
}
AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
    {
        type ="A_" + other.type;
    }
    std:: cout << "Copy assignment OP of AAnimal " << type << " called" << std::endl;
    return *this;
}

std::string AAnimal::getType() const
{
    return type;
}
AAnimal::~AAnimal()
{
    std::cout << "The AAnimal destructor is called!"<< std::endl;
}