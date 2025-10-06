/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:22:52 by abdo              #+#    #+#             */
/*   Updated: 2025/10/06 13:37:08 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

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
};

