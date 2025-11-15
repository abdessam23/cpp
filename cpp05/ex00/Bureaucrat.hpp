/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:38:08 by abdo              #+#    #+#             */
/*   Updated: 2025/11/15 15:36:30 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

#include <exception>
#include <string>

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
    class GradeTooHighException: public std::exception
    {
    public: 
        const char* what() const throw();
        ~GradeTooHighException() throw(){};
    };
    
    class GradeTooLowException: public std::exception
    {
    public: 
        const char* what() const throw();
        ~GradeTooLowException() throw() {};
    };
    
};

