/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:38:07 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 15:54:28 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria& other);
    std::string const& getType() const; 
    virtual AMateria* clone() const = 0;
    // virtual void use(ICharacter& target);
};
