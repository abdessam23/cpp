/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:08:08 by abdo              #+#    #+#             */
/*   Updated: 2025/12/05 09:53:13 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string& target);
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
        
        void execute(const Bureaucrat& executor) const;
};
    

