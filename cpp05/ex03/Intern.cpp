/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:11:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/09 13:02:52 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
}



Intern::Intern(const Intern& other)
{
    *this = other;
}
Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

AForm* Intern::shrubberyCreation(std::string& target)
{
    return (new ShrubberyCreationForm(target));
}
AForm* Intern::RobotomyRequest(std::string& target)
{
    return (new RobotomyRequestForm(target));
}
AForm* Intern::PresidentialPardon(std::string& target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string form,std::string target)
{

    std::string formname[3] = {"shrubbery creation","robotomy request","presidential pardon"};
    AForm* (Intern::*p[3])(std::string& ) = {&Intern::shrubberyCreation,&Intern::RobotomyRequest,&Intern::PresidentialPardon};
    Intern a;
    for(int i = 0; i < 3;i++)
    {
        if (form == formname[i])
        {
            std::cout << "Intern create : " << form << std::endl;
            return (a.*p[i])(target);
        }
    }
    std::cout << "there no form with name"<< std::endl;
    return NULL;
}

Intern::~Intern()
{
}
