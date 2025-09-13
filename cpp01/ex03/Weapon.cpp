/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:52:59 by abdo              #+#    #+#             */
/*   Updated: 2025/09/13 16:59:38 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type) :type(type){}
std::string Weapon::gettype()
{
    std::string str = type;
    return str;
}

void Weapon::setType(std::string str)
{
    type = str;
}