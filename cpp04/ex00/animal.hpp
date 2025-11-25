/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:05:17 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:34:46 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/09 16:17:51 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
       std::string type;
    public:
        Animal();
<<<<<<< HEAD
=======
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
>>>>>>> master
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};


