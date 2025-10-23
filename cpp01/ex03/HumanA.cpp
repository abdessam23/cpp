/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:49:16 by abdo              #+#    #+#             */
/*   Updated: 2025/10/15 18:25:30 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


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