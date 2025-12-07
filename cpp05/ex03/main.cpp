/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/07 10:29:46 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Intern.hpp"

int main()
{

    Bureaucrat a("boss",15);
    Intern someRandomIntern;
    AForm* rrf = someRandomIntern.makeForm("presidential pardon", "boss");
    std::cout << *rrf ;
    AForm* rf = someRandomIntern.makeForm("shrubbery creation", "home");
    std::cout << *rf ;
    AForm* f = someRandomIntern.makeForm("robotomy request", "bender");
    std::cout << *f;
    try{
        f->beSigned(a);
        f->execute(a);
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
    }
    
    delete rrf;
    delete rf;
    delete f;
}