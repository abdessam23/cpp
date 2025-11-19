/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:04:48 by abdo              #+#    #+#             */
/*   Updated: 2025/11/19 12:17:42 by abdo             ###   ########.fr       */
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
    if (this->getSign() && executor.getGrade() <= this->get_Gts())
    {
        std:: cout << executor << "Execute " << std::endl;
    }
    else
        throw RobotomyRequestForm::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
