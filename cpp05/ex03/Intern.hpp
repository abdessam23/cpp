/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:21:13 by abdo              #+#    #+#             */
/*   Updated: 2025/11/23 15:02:35 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string s1,std::string s2);
        class Internexcept: public std::exception
        {
          const char* what() const throw();  
        };
        
};

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


AForm* makeForm(std::string form,std::string target)
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
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

const char* Intern::Internexcept::what() const throw()
{
    return "There no form with this name. ";
}
Intern::~Intern()
{
}
