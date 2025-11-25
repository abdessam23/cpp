/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:26:51 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 16:03:34 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        slot[i] = NULL ;
    }
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
     for(int i = 0; i< 4 ;i++)
    {
        if (other.slot[i])
                slot[i] = other.slot[i]->clone();
            else
                slot[i] = NULL;
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
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
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4 ;i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
}
void MateriaSource::learnMateria(AMateria* m)
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
}
AMateria* MateriaSource::createMateria(std::string const& type)
{
    if (type == "cure")
        return (new Cure(type));
    else if (type == "ice")
        return (new Ice(type));
    return (0);
}
