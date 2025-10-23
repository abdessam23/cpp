#pragma once

#include <iostream>

class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie(std::string name): name(name){};
        ~Zombie(){
            std::cout << name << " is Destroyed!" << std::endl;
        }
        void announce();
        void randomChump(std::string name);
};
Zombie* newZombie( std::string name );