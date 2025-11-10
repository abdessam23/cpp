#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void AnimalTests()
{
	cout << "=====Animal Tests=====\n";
	{
		cout << "Constructor Test\n";
		cout << "-------------------\n";
		Animal a;
		Animal b;
		cout << "===================\n\n";

		cout << "Copy constructor Test\n";
		cout << "-------------------\n";
		
		Animal c = a;
		cout << "===================\n\n";

		cout << "operator= Test\n";
		cout << "-------------------\n";
		a = b;
		cout << "===================\n\n";

		cout << "makeSound() function Test\n";
		cout << "-------------------\n";
		c.makeSound();
		cout << "===================\n\n";

		cout << "Destructor Test\n";
		cout << "-------------------\n";
	}
	cout << "===================\n\n";
}

void DogTests()
{
	cout << "=====Dog Tests=====\n";
	{
		cout << "Constructor Test\n";
		cout << "-------------------\n";
		Dog a;
		Dog b;
		cout << "===================\n\n";

		cout << "Copy constructor Test\n";
		cout << "-------------------\n";
		
		Dog c = a;
		cout << "===================\n\n";

		cout << "operator= Test\n";
		cout << "-------------------\n";
		a = b;
		cout << "===================\n\n";

		cout << "makeSound() function Test\n";
		cout << "-------------------\n";
		c.makeSound();
		cout << "===================\n\n";

		cout << "Destructor Test\n";
		cout << "-------------------\n";
	}
	cout << "===================\n\n";
}

void CatTests()
{
	cout << "=====Cat Tests=====\n";
	{
		cout << "Constructor Test\n";
		cout << "-------------------\n";
		Cat a;
		Cat b;
		cout << "===================\n\n";

		cout << "Copy constructor Test\n";
		cout << "-------------------\n";
		
		Cat c = a;
		cout << "===================\n\n";

		cout << "operator= Test\n";
		cout << "-------------------\n";
		a = b;
		cout << "===================\n\n";

		cout << "makeSound() function Test\n";
		cout << "-------------------\n";
		c.makeSound();
		cout << "===================\n\n";

		cout << "Destructor Test\n";
		cout << "-------------------\n";
	}
	cout << "===================\n\n";
}

void WrongTests()
{
	const WrongAnimal* i = new WrongCat();
	cout << "\n";
	i->makeSound();
	cout << "\n";
	delete i;
}

void PolymorphismTests()
{
	const Animal* meta = new Animal();
	cout << "\n";
	const Animal* j = new Dog();
	cout << "\n";
	const Animal* i = new Cat();
	cout << "\n";
	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	cout << "\n";
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	cout << "\n";
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
		cout << "\n";
	}
	cout << "---------------------------\n";
	for(int i = size / 2; i < size; i++)
	{
		objects[i] = new Dog();
		cout << "\n";
	}
	cout << "---------------------------\n";
	for(int i = 0; i < size; i++)
	{
		objects[i]->makeSound();
		delete objects[i];
		cout << "\n";
	}
}

void ShallowCopyTests1()
{
	Brain *c = new Brain();
	cout << "\n";
	c->ideas[0] = "hello";
	Dog a;
	cout << "\n";
	a.SetBrain(c);
	Dog b = a;
	cout << "\n";

	cout << a.GetBrain()->ideas[0] << endl;
	cout << b.GetBrain()->ideas[0] << endl;
	cout << "\n";
	c->ideas[0] = "Hi";
	cout << a.GetBrain()->ideas[0] << endl;
	cout << b.GetBrain()->ideas[0] << endl;
	cout << "\n";
}

void ShallowCopyTests2()
{
	Brain *c = new Brain();
	cout << "\n";
	c->ideas[0] = "hello";
	Dog a;
	cout << "\n";
	a.SetBrain(c);
	cout << "\n";
	Dog b;
	cout << "\n";
	b = a;
	cout << "\n";
	cout << a.GetBrain()->ideas[0] << endl;
	cout << b.GetBrain()->ideas[0] << endl;
	cout << "\n";
	c->ideas[0] = "Hi";
	cout << a.GetBrain()->ideas[0] << endl;
	cout << b.GetBrain()->ideas[0] << endl;
	cout << "\n";
}

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
	// AnimalTests();
	// DogTests();
	// CatTests();
	// WrongTests();
	// PolymorphismTests();
	// LeaksTest();
	// ShallowCopyTests1();
	ShallowCopyTests2();

	return 0;
}
