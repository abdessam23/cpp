/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/08 18:52:26 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"



int main()
{
    DiamondTrap p("Monster1");
    // DiamondTrap l("Monster2");
    FragTrap a = p;
    

    a.attack("Monster3");
    // l.WhoIam();
    // l.attack("Monster4");
 
}