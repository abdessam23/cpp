/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:12 by abdo              #+#    #+#             */
/*   Updated: 2025/10/06 17:24:17 by abdo             ###   ########.fr       */
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

Animal::~Animal()
{
    std::cout << "The animal destractor is called!"<< std::endl;
}