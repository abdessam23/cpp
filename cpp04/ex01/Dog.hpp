/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
/*   Updated: 2025/10/09 10:35:02 by abhimi           ###   ########.fr       */
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
};

