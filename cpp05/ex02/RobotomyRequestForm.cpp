/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:04:48 by abdo              #+#    #+#             */
/*   Updated: 2025/11/19 15:43:32 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name):AForm(name,0,72,45)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other):AForm(other)
{
    *this = other;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
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

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
     if (!this->getSign())
    {
        throw RobotomyRequestForm::signedExecpt();
    }
    if (executor.getGrade() > this->get_Gtx())
        throw RobotomyRequestForm::GradeTooLowException();
    std::cout << this->getName() << " has been robotomized successfully 50% of the time" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
