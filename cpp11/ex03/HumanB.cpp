/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:48:37 by abdo              #+#    #+#             */
/*   Updated: 2025/10/15 18:49:33 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name)
{
}


void HumanB::setWeapon(Weapon& K)
{
    pb = Weapon(k.type);
    
}
void HumanB::attack()
{
    std::cout << name << " attacks with their "<< pb->getType() << std::endl;
}

HumanB::~HumanB()
{
}