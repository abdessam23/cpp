/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/08 16:27:25 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    std::cout << "\n===== TEST 1: Sign + Execute Shrubbery =====\n";
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm s("home");
        boss.signAForm(s);
        boss.executeAForm(s);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n===== TEST 2: Execute without signing =====\n";
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm s("garden");
        boss.executeAForm(s);  // should fail: not signed
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n===== TEST 3: Sign with too low grade =====\n";
    try {
        Bureaucrat noob("Noob", 150);
        ShrubberyCreationForm s("fail");
        noob.signAForm(s);  // should fail
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n===== TEST 4: Execute with too low grade =====\n";
    try {
        Bureaucrat low("Low", 150);
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm s("home2");

        boss.signAForm(s);
        low.executeAForm(s);  // should fail: executor too weak
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n===== TEST 5: Robotomy randomness =====\n";
    try {
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm r("Bender");
        boss.signAForm(r);

        for (int i = 0; i < 5; i++)
            boss.executeAForm(r);  // prints success/failure randomly
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    std::cout << "\n===== TEST 6: Presidential Pardon =====\n";
    try {
        Bureaucrat boss("Boss", 1);
        PresidentialPardonForm p("Arthur Dent");
        boss.signAForm(p);
        boss.executeAForm(p);
    }
    catch (std::exception &e) { std::cout << e.what() << "\n"; }

    return 0;
}
