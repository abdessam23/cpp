/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:36:26 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 16:09:50 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const std::string& type);
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure();
        AMateria* clone() const;
        // void use(ICharacter& target);
};