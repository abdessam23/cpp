/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:39:14 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 11:30:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(const std::string& type)
{
    this->type = type;
}

Ice::Ice(const Ice& other):AMateria(other)
{
    this->type = other.type;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}