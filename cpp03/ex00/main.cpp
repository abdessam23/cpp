/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:28:29 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


int main()
{
    ClapTrap alex("alex");
    ClapTrap bob("bob");
    ClapTrap pp = bob;
    ClapTrap k;
    k = alex;
    k.attack("bob");
    
    pp.attack("joj");
    bob.takeDamage(2);
    alex.attack("bob");
    alex.beRepaired(3);

    
    
}
