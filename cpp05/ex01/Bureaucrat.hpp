/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:38:08 by abdo              #+#    #+#             */
/*   Updated: 2025/11/17 15:28:21 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Form.hpp"
#include <iostream>

#include <exception>

class Bureaucrat
{
private:
   std::string name;
   int grade;
   Bureaucrat();
public:
    
    Bureaucrat(const std::string name,int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
    const std::string getName() const;
    int getGrade() const;
    void increase();
    void decrease();

    void signForm(Form& obj);
    class GradeTooHighException: public std::exception
    {
        const char* what() const throw();
    };
    
    class GradeTooLowException: public std::exception
    {
        const char* what() const throw();
    };
    
};
std::ostream& operator<<(std::ostream& out, Bureaucrat& obj);

