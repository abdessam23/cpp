/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:28:40 by abdo              #+#    #+#             */
/*   Updated: 2025/12/06 10:44:07 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 


#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    private:
        const std::string target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string& target);
        PresidentialPardonForm(PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        ~PresidentialPardonForm();
        void execute(const Bureaucrat& executor) const;
};
    
