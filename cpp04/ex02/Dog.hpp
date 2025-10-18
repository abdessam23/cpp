/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
/*   Updated: 2025/10/06 13:34:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"
#include "Brain.hpp"

class Dog :public Animal
{
    private:
        Brain* p;
    public:
        Dog();
        ~Dog();
        void makeSound() const;
};

