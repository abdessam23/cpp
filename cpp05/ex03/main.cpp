/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/09 10:18:56 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Intern.hpp"


int main()
{
    srand(time(0)); 
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);
    Bureaucrat low("Low", 150);

    std::cout << "\n\n";
    AForm* f1 = someRandomIntern.makeForm("shrubbery creation", "home");
    AForm* f2 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* f3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");

    std::cout << *f1;
    std::cout << *f2;
    std::cout << *f3;

    std::cout << "\n\n";
    AForm* invalid = someRandomIntern.makeForm("wrong form name", "target");
    std::cout << "\n\n";
    try {
        boss.executeForm(*f1); 
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    std::cout << "\n\n";
    try {
        low.signForm(*f2); 
    } catch (...) {}

    std::cout << "\n\n";
    boss.signForm(*f1);
    boss.signForm(*f2);
    boss.signForm(*f3);

    std::cout << "\n\n";
    try {
        low.executeForm(*f1);   
    } catch (std::exception &e) {
        std::cout << e.what() << "\n";
    }

    std::cout << "\n\n";
    boss.executeForm(*f1);
    for (int i = 0; i < 5; i++)
        boss.executeForm(*f2);
    boss.executeForm(*f3);

    delete f1;
    delete f2;
    delete f3;
    delete invalid;
    return 0;
}
