/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:20:57 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 15:09:21 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(std::string name);
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        ~RobotomyRequestForm();
};
    

