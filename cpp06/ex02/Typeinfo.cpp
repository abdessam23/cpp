/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typeinfo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:39:36 by abdo              #+#    #+#             */
/*   Updated: 2026/01/03 10:34:47 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

Base * generate(void)
{
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
    // std::cout<<"Identify by pointer"<<std::endl;
    if (dynamic_cast<A*> (p))
    {
        std::cout << "A" <<std::endl;
        return;
    }
    if (dynamic_cast<B*> (p))
    {
        std::cout << "B" <<std::endl;
        return;
    }
    if (dynamic_cast<C*> (p))
    {
        std::cout << "C" <<std::endl;
        return;
    }
}
void identify(Base& p)
{
    // std::cout<<"Identify by reference"<<std::endl;
    try{
       A& a = dynamic_cast<A&>(p);
       (void)a;
        std::cout << "A" <<std::endl;
        return;
    }
    catch(std::exception& e)
    {}
    
    try{
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" <<std::endl;
        return;
    }
    catch(std::exception& e)
    {}
    
    try{
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" <<std::endl;
        return;
     
    }
    catch(std::exception& e)
    {
    }
}

