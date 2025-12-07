/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:08:08 by abdo              #+#    #+#             */
/*   Updated: 2025/12/07 10:22:40 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
        const std::string getTarget() const;
        void execute(const Bureaucrat& executor) const;
};
    

