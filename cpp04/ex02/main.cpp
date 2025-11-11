/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:37:37 by abdo              #+#    #+#             */
/*   Updated: 2025/11/11 14:49:33 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


// int main()
// {
//     const Animal* j = new Dog();
//     std::std::cout << std::endl;
//     const Animal* i = new Cat();
//     Dog a;
//     Dog b ;
//     b = a ;
//     std::std::cout << std::endl;
//     i->makeSound();
//     std::std::cout << std::endl;
//     j->makeSound();
//     std::std::cout << std::endl;
//     b.makeSound();
//     delete j;//should not create a leak
//     std::std::cout << std::endl;
//     delete i;
//     return 0;
// }

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void AnimalTests()
{
	std::cout << "=====Animal Tests=====\n";
	{
		std::cout << "Constructor Test\n";
		std::cout << "-------------------\n";
		Dog f;
		Animal &a = f;
		// Animal b =a;
		std::cout << "===================\n\n";

		std::cout << "Copy constructor Test\n";
		std::cout << "-------------------\n";
		
		// Animal c = a;
		std::cout << "===================\n\n";

		std::cout << "operator= Test\n";
		std::cout << "-------------------\n";
		// a = b;
		std::cout << "===================\n\n";

		std::cout << "makeSound() function Test\n";
		std::cout << "-------------------\n";
		a.makeSound();
		std::cout << "===================\n\n";
		a.getType();
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

// void PolymorphismTests()
// {
// 	const Animal* meta = new Animal();
// 	std::cout << "\n";
// 	const Animal* j = new Dog();
// 	std::cout << "\n";
// 	const Animal* i = new Cat();
// 	std::cout << "\n";
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << "\n";
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	std::cout << "\n";
// 	delete meta;
// 	delete j;
// 	delete i;
// }

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

// void ShallowCopyTests1()
// {
// 	Brain *c = new Brain();
// 	std::cout << "\n";
// 	c->ideas[0] = "hello";
// 	Dog a;
// 	std::cout << "\n";
// 	a.SetBrain(c);
// 	Dog b = a;
// 	std::cout << "\n";

// 	std::cout << a.GetBrain()->ideas[0] << endl;
// 	std::cout << b.GetBrain()->ideas[0] << endl;
// 	std::cout << "\n";
// 	c->ideas[0] = "Hi";
// 	std::cout << a.GetBrain()->ideas[0] << endl;
// 	std::cout << b.GetBrain()->ideas[0] << endl;
// 	std::cout << "\n";
// }

// void ShallowCopyTests2()
// {
// 	Brain *c = new Brain();
// 	std::cout << "\n";
// 	c->ideas[0] = "hello";
// 	Dog a;
// 	std::cout << "\n";
// 	a.SetBrain(c);
// 	std::cout << "\n";
// 	Dog b;
// 	std::cout << "\n";
// 	b = a;
// 	std::cout << "\n";
// 	std::cout << a.GetBrain()->ideas[0] << endl;
// 	std::cout << b.GetBrain()->ideas[0] << endl;
// 	std::cout << "\n";
// 	c->ideas[0] = "Hi";
// 	std::cout << a.GetBrain()->ideas[0] << endl;
// 	std::cout << b.GetBrain()->ideas[0] << endl;
// 	std::cout << "\n";
// }

/*
Brain* GetBrain();
void SetBrain(Brain* brain);
Brain* Dog::GetBrain()
{
	return brain;
}

void Dog::SetBrain(Brain *brain)
{
	delete this->brain;
	this->brain = brain;
}
*/

int main()
{
	AnimalTests();
	// DogTests();
	// CatTests();
	//WrongTests();
	// PolymorphismTests();
	// LeaksTest();
	// ShallowCopyTests1();
	// ShallowCopyTests2();

}
