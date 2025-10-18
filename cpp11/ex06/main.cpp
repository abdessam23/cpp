/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:36:41 by abdo              #+#    #+#             */
/*   Updated: 2025/10/18 17:51:19 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int arc, char **argv)
{
    Harl a;
    if (arc != 2)
    {
        std::cerr << "Usage: ./HarlFilter <level> " << std::endl;
        return 1;   
    }
    std::string str = argv[1];
    a.complain(str);
}