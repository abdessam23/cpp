/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 14:27:20 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animal.hpp"

class Dog :public Animal
{
    public:
        Dog();
        Dog(const  Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
};

