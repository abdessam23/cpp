/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:37:37 by abdo              #+#    #+#             */
/*   Updated: 2025/11/12 15:41:21 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void AnimalTests()
{
	std::cout << "=====Animal Tests=====\n";
	{
		std::cout << "Constructor Test\n";
		std::cout << "-------------------\n";
		Animal a;
		Animal b;
		std::cout << "===================\n\n";

		std::cout << "Copy constructor Test\n";
		std::cout << "-------------------\n";
		
		Animal c = a;
		std::cout << "===================\n\n";

		std::cout << "operator= Test\n";
		std::cout << "-------------------\n";
		a = b;
		std::cout << "===================\n\n";

		std::cout << "makeSound() function Test\n";
		std::cout << "-------------------\n";
		c.makeSound();
		std::cout << "===================\n\n";

		std::cout << "Destructor Test\n";
		std::cout << "-------------------\n";
	}
	std::cout << "===================\n\n";
}

void DogTests()
{
	std::cout << "=====Dog Tests=====\n";
	{
		std::cout << "Constructor Test\n";
		std::cout << "-------------------\n";
		Dog a;
		Dog b;
		std::cout << "===================\n\n";

		std::cout << "Copy constructor Test\n";
		std::cout << "-------------------\n";
		
		Dog c = a;
		std::cout << "===================\n\n";

		std::cout << "operator= Test\n";
		std::cout << "-------------------\n";
		a = b;
		std::cout << "===================\n\n";

		std::cout << "makeSound() function Test\n";
		std::cout << "-------------------\n";
		c.makeSound();
		std::cout << "===================\n\n";

		std::cout << "Destructor Test\n";
		std::cout << "-------------------\n";
	}
	std::cout << "===================\n\n";
}

void CatTests()
{
	std::cout << "=====Cat Tests=====\n";
	{
		std::cout << "Constructor Test\n";
		std::cout << "-------------------\n";
		Cat a;
		Cat b;
		std::cout << "===================\n\n";

		std::cout << "Copy constructor Test\n";
		std::cout << "-------------------\n";
		
		Cat c = a;
		std::cout << "===================\n\n";

		std::cout << "operator= Test\n";
		std::cout << "-------------------\n";
		a = b;
		std::cout << "===================\n\n";

		std::cout << "makeSound() function Test\n";
		std::cout << "-------------------\n";
		c.makeSound();
		std::cout << "===================\n\n";

		std::cout << "Destructor Test\n";
		std::cout << "-------------------\n";
	}
	std::cout << "===================\n\n";
}

void WrongTests()
{
	const WrongAnimal* i = new WrongCat();
	std::cout << "\n";
	i->makeSound();
	std::cout << "\n";
	delete i;
}

void PolymorphismTests()
{
	const Animal* meta = new Animal();
	std::cout << "\n";
	const Animal* j = new Dog();
	std::cout << "\n";
	const Animal* i = new Cat();
	std::cout << "\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "\n";
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\n";
	delete meta;
	delete j;
	delete i;
}

void LeaksTest()
{
	int size = 10;
	Animal *objects[size];
	for(int i = 0; i < size / 2; i++)
	{
		objects[i] = new Cat();
		std::cout << "\n";
	}
	std::cout << "---------------------------\n";
	for(int i = size / 2; i < size; i++)
	{
		objects[i] = new Dog();
		std::cout << "\n";
	}
	std::cout << "---------------------------\n";
	for(int i = 0; i < size; i++)
	{
		objects[i]->makeSound();
		delete objects[i];
		std::cout << "\n";
	}
}


int main()
{
	AnimalTests();
	DogTests();
	CatTests();
	WrongTests();
	PolymorphismTests();
	LeaksTest();

}
