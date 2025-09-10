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
        void announce()
        {
            std::cout << name << ":  BraiiiiiiinnnzzzZ.." << std::endl;
        }
    
};
