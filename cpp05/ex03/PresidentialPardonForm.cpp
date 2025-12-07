/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:05:33 by abdo              #+#    #+#             */
/*   Updated: 2025/12/07 10:26:22 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm",25,5),target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):AForm("PresidentialPardonForm",25,5),target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):AForm(other),target(other.target)
{
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
    if (this != &other)
        target = other.target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!this->getSign())
        throw PresidentialPardonForm::signedExecpt();
    else if (executor.getGrade() > this->get_Gts())
        throw PresidentialPardonForm::GradeTooLowException();
    else     
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string PresidentialPardonForm::getTarget() const
{
    return target;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}