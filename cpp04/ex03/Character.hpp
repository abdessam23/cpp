/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:31:04 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 20:15:11 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        
        Character();
        Character(const std::string& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};

Character::Character():name("")
{
    for (int i = 0; i < 4 ;i++)
    {
        inventory[i] = NULL;
    }
}

Character::Character(const Character& other):name(other.name)
{
    for(int i = 0; i< 4 ;i++)
    {
        inventory[i] =  other.inventory[i];
    }
}

 Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4 ;i++)
        {
            if (inventory[i] != NULL)
                delete inventory[i];
        }
        for(int i = 0; i< 4 ;i++)
        {
            inventory[i] =  other.inventory[i];
        }
    }
    return *this;
}

Character::Character(const std::string& name):name(name)
{
    for(int i = 0; i < 4; i++)
    {
        inventory[i] = NULL ;
    }
}
std::string const& Character::getName() const
{
    return name;
}

Character::~Character()
{
}
