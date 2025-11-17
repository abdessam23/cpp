/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:18:11 by abdo              #+#    #+#             */
/*   Updated: 2025/11/17 15:28:02 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
    private:
        const std::string name;
        bool n;
        const int grade_to_s;
        const int grade_to_x;
        Form();
    public:
        Form(const std::string name,bool n,const int grade_to_s,const int grade_to_x);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();
        void beSigned(Bureaucrat& obj);
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
        
        const std::string getName() const;
        const int get_Gts() const;
        const int get_Gtx() const;
        bool getSign();
        
};
std::ostream& operator<<(std::ostream& out, Form& obj);
