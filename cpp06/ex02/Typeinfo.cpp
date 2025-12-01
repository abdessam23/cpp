/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typeinfo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:39:36 by abdo              #+#    #+#             */
/*   Updated: 2025/12/01 12:53:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

Base * generate(void)
{
    std::srand(std::time(0));
    int randomNum = std::rand();
    if (randomNum % 3 == 0)
        return (new A());
    else if(randomNum % 2 == 0)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    A* a = dynamic_cast<A*> (p);
    if (a)
        std::cout << "A";
    B* b = dynamic_cast<B*> (p);
    if (b)
        std::cout << "B";
    C* c = dynamic_cast<C*> (p);
    if (c)
        std::cout << "C";
}
void identify(Base& p)
{
    try{
        A& a = dynamic_cast<A&>(p);
        std::cout << "A";
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        B& b = dynamic_cast<B&>(p);
        std::cout << "B";
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    
    try{
        C& c = dynamic_cast<C&>(p);
        std::cout << "C";
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

