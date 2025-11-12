/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:00:02 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 16:02:25 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character():name("")
{
    for (int i = 0; i < 4 ;i++)
    {
        slot[i] = NULL;
    }
}

Character::Character(const Character& other):name(other.name)
{
    for(int i = 0; i < 4 ;i++)
    {
        if (other.slot[i])
                slot[i] = other.slot[i]->clone();
        else
            slot[i] = NULL;
    }
}

 Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4 ;i++)
        {
            if (slot[i] != NULL)
                delete slot[i];
        }
        for(int i = 0; i < 4 ;i++)
        {
            if (other.slot[i])
                slot[i] = other.slot[i]->clone();
            else
                slot[i] = NULL;
        }
    }
    return *this;
}

Character::Character(const std::string& name):name(name)
{
    for(int i = 0; i < 4; i++)
    {
        slot[i] = NULL ;
    }
}
void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for(int i = 0; i < 4 ;i++)
    {
        if (slot[i] == NULL)
        {
            slot[i] = m;
            return;   
        }
    }
    delete m;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !slot[idx])
        return;
    slot[idx]->use(target);
}
std::string const& Character::getName() const
{
    return name;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    for (int i = 0; i < 4 ;i++)
    {
            if (i == idx)
            {
                slot[i] = NULL;
                return;
            }
                
    }
    
}
Character::~Character()
{
    for (int i = 0; i < 4 ;i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
}