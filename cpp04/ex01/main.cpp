/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:37:37 by abdo              #+#    #+#             */
/*   Updated: 2025/11/09 17:20:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const Animal* j = new Dog();
    std::cout << std::endl;
    const Animal* i = new Cat();
    Cat a;
    Cat b ;
    b =a ;
    std::cout << std::endl;
    i->makeSound();
    std::cout << std::endl;
    j->makeSound();
    std::cout << std::endl;
    b.makeSound();
    delete j;//should not create a leak
    std::cout << std::endl;
    delete i;
    return 0;
}
