/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/23 15:21:34 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Intern.hpp"

int main()
{

Intern someRandomIntern;

    AForm* rrf = someRandomIntern.makeForm("presidential pardon", "home");
    delete rrf;

    // try
    // {
    //     Bureaucrat b("boss",45);
    //     ShrubberyCreationForm a("contrat");
    //     RobotomyRequestForm l("robot");
    //     // a.beSigned(b);
    //     // a.execute(b);
    //     l.beSigned(b);
    //     l.execute(b);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
}