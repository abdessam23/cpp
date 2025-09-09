/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:32:56 by abdo              #+#    #+#             */
/*   Updated: 2025/09/09 17:10:16 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie(std::string name): name(name){};
        void announce()
        {
            std::cout << name << ":  BraiiiiiiinnnzzzZ.." << std::endl;
        }
        
        // void randomChump(std::string name)
        // {
        
        // }
    
   
};
Zombie* newZombie( std::string name )
        {   
            return new Zombie(name);
        }
int main()
{
    Zombie stackzombie("HIMI");
    stackzombie.announce();
    Zombie* heapzombie = newZombie("abdessamad");
    heapzombie->announce();
    delete heapzombie;
}

