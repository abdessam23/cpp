/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:28:49 by abdo              #+#    #+#             */
/*   Updated: 2025/11/25 12:18:01 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>


class Zombie
{
    private:
    std::string  name;
    
    public:
    Zombie(std::string name);
    void announce();
    ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

