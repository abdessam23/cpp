/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:28:49 by abdo              #+#    #+#             */
/*   Updated: 2025/10/21 09:18:25 by abhimi           ###   ########.fr       */
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
    void SetName(std::string str);
    void announce();
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

