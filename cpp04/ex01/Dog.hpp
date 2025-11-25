/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
/*   Updated: 2025/10/09 10:35:02 by abhimi           ###   ########.fr       */
=======
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:31:19 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 17:29:44 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#pragma once

<<<<<<< HEAD
#include "animal.hpp"
=======
>>>>>>> master
#include "Brain.hpp"

class Dog :public Animal
{
    private:
        Brain* p;
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

