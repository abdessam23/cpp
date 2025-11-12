/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 15:29:49 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

class Dog :public AAnimal
{
    private:
        Brain* p;
    public:
        Dog();
        Dog(const  Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
};

