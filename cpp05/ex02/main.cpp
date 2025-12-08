/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/08 17:34:28 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(0));
    std::cout << "\n\n";
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm s("home");
        boss.signForm(s);
        boss.executeForm(s);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n\n";
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm s("garden");
        boss.executeForm(s);
    }
    catch (std::exception &e) 
    { 
        std::cout << e.what() << "\n";
    }

    std::cout << "\n\n";
    try {
        Bureaucrat noob("Noob", 150);
        ShrubberyCreationForm s("fail");
        noob.signForm(s);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n\n";
    try {
        Bureaucrat low("Low", 150);
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm s("home2");

        boss.signForm(s);
        low.executeForm(s);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n\n";
    try {
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm r("Bender");
        boss.signForm(r);

        for (int i = 0; i < 5; i++)
            boss.executeForm(r);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n\n";
    try {
        Bureaucrat boss("Boss", 1);
        PresidentialPardonForm p("Arthur Dent");
        boss.signForm(p);
        boss.executeForm(p);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    return 0;
}
