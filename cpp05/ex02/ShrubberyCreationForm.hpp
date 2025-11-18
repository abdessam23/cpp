/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:08:08 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 14:16:46 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
};
    
ShrubberyCreationForm::ShrubberyCreationForm(std::string name):AForm(name,0,145,137)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other):AForm(other)
{
    *this = other;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        // setName(other.getName());
        set_Gts(other.get_Gts());
        set_Gtx(other.get_Gtx());
        setSign(other.getSign());
    }
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
