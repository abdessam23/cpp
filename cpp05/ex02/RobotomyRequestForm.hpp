/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:20:57 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 14:37:21 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(std::string name);
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        ~RobotomyRequestForm();
};
    
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
RobotomyRequestForm::~RobotomyRequestForm()
{
}
