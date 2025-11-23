/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:11:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/23 15:16:02 by abdo             ###   ########.fr       */
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
    if (this != &other)
    {
        *this = other;
    }
    return *this;
}


AForm* Intern::makeForm(std::string form,std::string target)
{
       try
    {
       AForm* aform;
        if (form == "shrubbery creation")
           aform = new ShrubberyCreationForm(target);
        else if (form == "robotomy request")
           aform = new RobotomyRequestForm(target);
        else if (form == "presidential pardon")
           aform = new PresidentialPardonForm(target);
        else
            throw(Intern::Internexcept());
        std::cout << "Intern creates " << aform->getName() << std::endl;
        return aform;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return NULL;
    }
    
}

const char* Intern::Internexcept::what() const throw()
{
    return "There no form with this name. ";
}
Intern::~Intern()
{
}