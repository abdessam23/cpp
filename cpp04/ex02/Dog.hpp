/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 13:34:55 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/12 15:29:49 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#pragma once

<<<<<<< HEAD
#include "animal.hpp"
#include "Brain.hpp"

class Dog :public Animal
=======
#include "Brain.hpp"

class Dog :public AAnimal
>>>>>>> master
{
    private:
        Brain* p;
    public:
        Dog();
<<<<<<< HEAD
=======
        Dog(const  Dog& other);
        Dog& operator=(const Dog& other);
>>>>>>> master
        ~Dog();
        void makeSound() const;
};

