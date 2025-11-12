/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:07:17 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 15:24:41 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    type = "cure";
}

Cure::Cure(const std::string& type)
{
    this->type = type;
}

Cure::Cure(const Cure& other):AMateria(other)
{
    this->type = other.type;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void   Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}