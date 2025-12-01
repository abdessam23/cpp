/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typeinfo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:39:36 by abdo              #+#    #+#             */
/*   Updated: 2025/12/01 12:16:36 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

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
    
}
void identify(Base& p)
{
    
}

