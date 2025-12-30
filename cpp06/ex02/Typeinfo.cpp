/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typeinfo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:39:36 by abdo              #+#    #+#             */
/*   Updated: 2025/12/29 15:24:46 by abhimi           ###   ########.fr       */
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
    try{
        dynamic_cast<A&>(p);
        std::cout << "A" <<std::endl;
        return;
    }
    catch(std::exception& e)
    {}
    
    try{
        dynamic_cast<B&>(p);
        std::cout << "B" <<std::endl;
        return;
    }
    catch(std::exception& e)
    {}
    
    try{
        dynamic_cast<C&>(p);
        std::cout << "C" <<std::endl;
        return;
     
    }
    catch(std::exception& e)
    {
        std::cout <<"it is not a type of A ,B or C"<< std::endl;
    }
}

