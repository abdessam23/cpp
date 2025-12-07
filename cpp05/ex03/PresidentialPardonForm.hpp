/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:28:40 by abdo              #+#    #+#             */
/*   Updated: 2025/12/07 10:23:13 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 


#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        ~PresidentialPardonForm();
        const std::string getTarget() const;
        void execute(const Bureaucrat& executor) const;
};
    
