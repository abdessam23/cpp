/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:28:40 by abdo              #+#    #+#             */
/*   Updated: 2025/11/19 12:16:50 by abdo             ###   ########.fr       */
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
        void execute(const Bureaucrat& executor) const;
};
    
