/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:48:59 by abdo              #+#    #+#             */
/*   Updated: 2025/11/13 17:33:37 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#define cout std::cout
#define endl std::endl

void IceTests()
{
	cout << "=====Ice Tests=====\n";
	{
		Ice var;
		cout << "getType: " << var.getType() << endl;
		cout << "\ncopy constractor test\n";
		Ice var2 = var;
		cout << "var: " << &var << ", var2: " << &var2 << endl;

		Ice var3;
		var = var3;
		cout << "\nassignment operator test\n";
		cout << "var: " << &var << ", var3: " << &var3 << endl;

		cout << "\nUse func test\n";
		Character ch("Test");
		var3.use(ch);
	}
}

void CureTests()
{
	cout << "\n=====Cure Tests=====\n";
	{
		Cure var;
		cout << "getType: " << var.getType() << endl;
		cout << "\ncopy constractor test\n";
		Cure var2 = var;
		cout << "var: " << &var << ", var2: " << &var2 << endl;

		Cure var3;
		var = var3;
		cout << "\nassignment operator test\n";
		cout << "var: " << &var << ", var3: " << &var3 << endl;

		cout << "\nUse func test\n";
		Character ch("Test");
		var3.use(ch);
	}
}

void CharacterTests()
{
	cout << "\n=====Character Tests=====\n";
	{
		Character ch("myCharacter");
        
		ch.equip(new Ice());
		ch.equip(new Cure());

		cout << "name: " << ch.getName() << "\n";

		Character ch2("myCharacter2");
		ch.use(0, ch2);
		cout << "\n";
		ch.use(1, ch2);
		cout << "\n";

		ch2.equip(new Ice());
		ch.equip(new Ice());
		ch.equip(new Cure());
        ch.equip(new Cure());
		ch.equip(new Cure());
		ch.equip(new Ice());

		ch2 = ch;
		
		ch.use(0, ch2);
		cout << "\n";
		ch.use(3, ch2);
		cout << "\n";
	}
}

void FinalTest()
{
	cout << "\n=====Final Test=====\n";
	{
		
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		MateriaSource a;
		MateriaSource b;
		a = b;
		IMateriaSource* t = &a;
		t->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
	
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		delete bob;
		delete me;
		delete src;
	}
}

int main()
{
	// IceTests();
	// CureTests();
	CharacterTests();
	// FinalTest();
	return 0;
}
