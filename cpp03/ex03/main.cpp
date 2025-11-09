/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 11:52:13 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"



int main()
{
    DiamondTrap p("Monster1");
    DiamondTrap l("Monster2");
    ClapTrap *a = &p;
    DiamondTrap v = p;
    DiamondTrap f("foo");

    f = p;

    a->attack("Monster3");
    l.WhoIam();
    l.attack("Monster4");
    v.highFivesGuys();
    v.guardGate();
    v.beRepaired(3);
    f.WhoIam();
}