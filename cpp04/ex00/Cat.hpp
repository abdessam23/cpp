/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:22:52 by abdo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/06 17:31:47 by abdo             ###   ########.fr       */
=======
/*   Updated: 2025/11/09 14:26:34 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
<<<<<<< HEAD
        ~Cat();
=======
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound() const;
>>>>>>> master
};

