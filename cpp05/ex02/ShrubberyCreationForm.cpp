/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:03:30 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 15:13:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):AForm(name,0,145,137)
{
    std::string target = name + "_shrubbery";
    std::ofstream file(target.c_str());
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other):AForm(other)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        setName(other.getName());
        set_Gts(other.get_Gts());
        set_Gtx(other.get_Gtx());
        setSign(other.getSign());
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}