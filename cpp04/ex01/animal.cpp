/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
/*   Updated: 2025/10/05 18:17:23 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal():type(" ")
{
    std::cout << "The animal constractor is called!"<< std::endl;
}
std::string Animal::getType() const
{
    return type;
}
void Animal::makeSound() const
{
    std::cout << " "<< std::endl;
}

Animal::~Animal()
{
    std::cout << "The animal destractor is called!"<< std::endl;
}