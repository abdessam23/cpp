/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:08:08 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 13:28:36 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
};
    
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) 
{
    AForm::setName(name);
    AForm::set_Gts(145);
    AForm::set_Gtx(137);
    AForm::setSign(0);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
