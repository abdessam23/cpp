/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:22:52 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:25:37 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/12 15:29:59 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */


#pragma once

<<<<<<< HEAD
#include "animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain* p;
    public:
        Cat();
        ~Cat();
        void makeSound() const;
=======
#include "Brain.hpp"

class Cat: public AAnimal
{
    private :
        Brain* p;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound() const;
        std::string getBrain() const;
>>>>>>> master
};

