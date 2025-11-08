/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/07 16:34:13 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"



int main()
{
    // ClapTrap a("koko");
    // ScavTrap b ("ERROR");
    // ClapTrap c = b;

    ClapTrap f = ScavTrap("ROBOT");
    // a.attack("goo");
    // b.attack("hop");
    f.attack("ERROR");
    
}