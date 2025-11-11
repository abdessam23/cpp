/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 14:43:19 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal():type("")
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
        type ="A_" + other.type;
    }
    std:: cout << "Copy assignment OP of animal " << type << " called" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}
Animal::~Animal()
{
    std::cout << "The animal destructor is called!"<< std::endl;
}