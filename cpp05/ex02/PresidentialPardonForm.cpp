/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:05:33 by abdo              #+#    #+#             */
/*   Updated: 2025/12/05 11:04:00 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string& target):AForm("PresidentialPardonForm",25,5),target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other):AForm(other)
{
    *this = other;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
    (void)other;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!this->getSign())
    {
        throw PresidentialPardonForm::signedExecpt();
    }
    if (executor.getGrade() > this->get_Gts())
        throw PresidentialPardonForm::GradeTooLowException();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}