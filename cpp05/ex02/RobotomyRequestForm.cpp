/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:04:48 by abdo              #+#    #+#             */
/*   Updated: 2025/12/08 16:11:23 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm",72,45),target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):AForm("RobotomyRequestForm",72,45),target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm(other),target(other.target)
{
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
    if (this != &other)
        target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!this->getSign())
    {
        throw RobotomyRequestForm::signedExecpt();
    }
    else if (executor.getGrade() > this->get_Gtx())
        throw RobotomyRequestForm::GradeTooLowException();
    else{
        srand(time(0));
        int a = rand();
        std::cout << "Drrrrrrrrrr!" <<std::endl;
        if (a % 2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
        else
            std::cout << "The robotomy failed." << std::endl;
    }
}

const std::string RobotomyRequestForm::getTarget() const
{
    return target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
