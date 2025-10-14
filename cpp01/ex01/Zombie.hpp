/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:28:49 by abdo              #+#    #+#             */
/*   Updated: 2025/10/14 17:50:05 by abdo             ###   ########.fr       */
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
    Zombie();
    void setname(std::string str);
    void announce();
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

