/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:30:53 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"



int main()
{
    ScavTrap a("bot1");
    ScavTrap b ("bot2");
    ScavTrap c = b;

    ClapTrap &f = b;
    a.attack("bot6");
    b.attack("bot5");
    f.attack("bot3");
    c.attack("bot1");
    b.beRepaired(5);
    b.guardGate();
}

