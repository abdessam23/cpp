/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:37:46 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 14:43:14 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
{
    this->type  = type; 
}
AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
}
AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
std::string const& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria type: " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
    
}