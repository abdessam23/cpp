/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:28:40 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 14:37:45 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 


#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm(PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        ~PresidentialPardonForm();
};
    
PresidentialPardonForm::PresidentialPardonForm(std::string name):AForm(name,0,25,5)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other):AForm(other)
{
    *this = other;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
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
PresidentialPardonForm::~PresidentialPardonForm()
{
}