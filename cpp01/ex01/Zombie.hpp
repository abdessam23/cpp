/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:32:16 by abdo              #+#    #+#             */
/*   Updated: 2025/09/10 17:52:44 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    int N;
    
    public:
        std::string name;
        Zombie(int N): N(N) {
        };
        int get()
        {
            return N;
        }
        ~Zombie()
        {
            std::cout << "all detroyed" << std::endl;
        }
        void announce();
};
Zombie*  zombieHorde(int N, std::string name);