/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:33:52 by abdo              #+#    #+#             */
/*   Updated: 2025/10/15 17:35:24 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):type(type)
{
}
const std::string& Weapon::getType()
{
    return type;
}
void Weapon::setType(std::string str)
{
    type = str;
}
Weapon::~Weapon()
{
}