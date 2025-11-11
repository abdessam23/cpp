/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:31:04 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 18:42:58 by abdo             ###   ########.fr       */
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

Character(const Character& other)
{
    
}
Character::Character(const std::string& name):name(name)
{
    for(int i = 0; i < 4; i++)
    {
        inventory[i] = NULL ;
    }
}
Character::~Character()
{
}
