/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:18:11 by abdo              #+#    #+#             */
/*   Updated: 2025/11/17 15:41:39 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        std::string name;
        bool n;
        int grade_to_s;
        int grade_to_x;
        AForm();
         
    public:
        AForm(const std::string name,bool n,const int grade_to_s,const int grade_to_x);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();
        void beSigned(Bureaucrat& obj);
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const  = 0 ;
        std::string getName();
        int get_Gts() const;
        int get_Gtx() const;
        bool getSign();
        void  setName(std::string name);
        void set_Gts(int n1);
        void set_Gtx(int n2);
        void setSign(bool n3);
        
};
std::ostream& operator<<(std::ostream& out, AForm& obj);
