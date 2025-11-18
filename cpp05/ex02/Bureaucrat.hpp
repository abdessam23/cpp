/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:38:08 by abdo              #+#    #+#             */
/*   Updated: 2025/11/18 17:13:59 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AForm.hpp"
#include <iostream>

#include <exception>
class AForm;
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

    void signAForm(const AForm& obj);
    void executeAForm(AForm const& AForm) const;
    class GradeTooHighException: public std::exception
    {
        const char* what() const throw();
    };
    
    class GradeTooLowException: public std::exception
    {
        const char* what() const throw();
    };
    
};
std::ostream& operator<<(std::ostream& out,const Bureaucrat& obj);

