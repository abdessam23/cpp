/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:31:52 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/09 14:27:20 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"

class Dog :public Animal
{
    public:
        Dog();
<<<<<<< HEAD
        ~Dog();
=======
        Dog(const  Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
>>>>>>> master
};

