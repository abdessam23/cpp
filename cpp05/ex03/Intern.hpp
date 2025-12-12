/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:21:13 by abdo              #+#    #+#             */
/*   Updated: 2025/12/09 13:00:05 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string s1,std::string s2);
        static ShrubberyCreationForm* shrubberyCreation(std::string& target);
        static RobotomyRequestForm* RobotomyRequest(std::string& target);
        static PresidentialPardonForm* PresidentialPardon(std::string& target);
        // static std::string formname[3];
        // static AForm* (*p[3])(std::string& );
    
};

