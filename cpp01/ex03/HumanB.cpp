/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:53:52 by abdo              #+#    #+#             */
/*   Updated: 2025/09/13 17:01:44 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
}
void HumanB::setWeapon(Weapon& k)
{
            p = &k;
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << p->gettype()<< std::endl;
}