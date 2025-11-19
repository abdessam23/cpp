/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:05:33 by abdo              #+#    #+#             */
/*   Updated: 2025/11/19 12:18:01 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string name):AForm(name,0,25,5)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other):AForm(other)
{
    *this = other;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
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

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (this->getSign() && executor.getGrade() <= this->get_Gts())
    {
        std:: cout << executor << "Execute " << std::endl;
    }
    else
        throw PresidentialPardonForm::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}