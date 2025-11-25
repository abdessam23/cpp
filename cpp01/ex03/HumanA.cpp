/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:49:16 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:21:58 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& w)
{
    name = str;
    p = &w;
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << p->gettype() << std::endl;
}


HumanA::HumanA(std::string name,Weapon& pA): name(name),pA(pA)
{
}
void HumanA::attack()
{
    std::cout << name << " attacks with their "<< pA.getType() << std::endl;
}

HumanA::~HumanA()
{
}

