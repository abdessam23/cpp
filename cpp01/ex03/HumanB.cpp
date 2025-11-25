/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:48:37 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:23:08 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"


HumanB::HumanB(std::string name):name(name),pb(NULL)
{
}


void HumanB::setWeapon(Weapon& m)
{
    pb = &m;
}
void HumanB::attack()
{
    if (pb)
        std::cout << name << " attacks with their "<< pb->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attacks " << std::endl;
}

HumanB::~HumanB()
{
}