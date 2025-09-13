/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:53:35 by abdo              #+#    #+#             */
/*   Updated: 2025/09/13 17:03:48 by abdo             ###   ########.fr       */
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
