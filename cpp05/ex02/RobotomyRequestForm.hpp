/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:20:57 by abdo              #+#    #+#             */
/*   Updated: 2025/12/06 10:40:55 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string& target);
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        ~RobotomyRequestForm();
        void execute(const Bureaucrat& executor) const;
};
    

