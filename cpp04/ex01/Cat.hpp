/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:22:52 by abdo              #+#    #+#             */
/*   Updated: 2025/10/09 10:34:43 by abhimi           ###   ########.fr       */
=======
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:22:52 by abdo              #+#    #+#             */
/*   Updated: 2025/11/10 17:59:12 by abdo             ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */


#pragma once

<<<<<<< HEAD
#include "animal.hpp"
=======
>>>>>>> master
#include "Brain.hpp"

class Cat: public Animal
{
<<<<<<< HEAD
    private:
        Brain* p;
    public:
        Cat();
        ~Cat();
=======
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

