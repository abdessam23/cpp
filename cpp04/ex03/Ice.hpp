/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:29:44 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 15:57:42 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const std::string& type);
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();
        AMateria* clone() const;
        // void use(ICharacter& target);
};