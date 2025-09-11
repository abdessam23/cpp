/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:32:16 by abdo              #+#    #+#             */
/*   Updated: 2025/09/11 18:59:20 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    std::string name;
    public:
        ~Zombie(){};
        void setname(std::string str);
        void announce();
};
Zombie*  zombieHorde(int N, std::string name);