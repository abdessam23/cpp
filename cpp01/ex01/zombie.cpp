/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:00:19 by abdo              #+#    #+#             */
/*   Updated: 2025/09/11 18:59:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::~Zombie(){
            std::cout << name << "Destroyed!" << std::endl;
}
void Zombie::announce()
{
    std::cout << name << std::endl;
}

void Zombie::setname(std::string str)
{
    name = str;
}