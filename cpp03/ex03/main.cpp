/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:18:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/06 18:03:20 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"



int main()
{
    DiamondTrap p("robot");
    DiamondTrap L(p);
    DiamondTrap K("OK");
    
    K = L;
    
    p.attack("kol");
    p.WhoIam();
    L.attack("boot");

    K.attack("DD");
}