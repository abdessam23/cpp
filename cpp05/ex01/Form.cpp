/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:18:15 by abdo              #+#    #+#             */
/*   Updated: 2025/12/04 11:51:38 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form():name("Boss"),n(0),grade_to_s(1), grade_to_x(60){}

 Form::Form(const std::string& name,bool n,const int grade_to_s,const int grade_to_x):name(name),n(n),grade_to_s(grade_to_s), grade_to_x(grade_to_x)
 {
     if (grade_to_s < 1 || grade_to_x < 1)
    {
        throw Form::GradeTooHighException();
    }
    if (grade_to_s > 150 || grade_to_x > 150)
    {
        throw Form::GradeTooLowException();
    }
}
 
Form::Form(const Form& other):name(other.name),n(other.n),grade_to_s(other.grade_to_s), grade_to_x(other.grade_to_x)
{}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
       *this = other;
    }
    return *this;
}

const std::string Form::getName() const
{
    return name;
}

int Form::get_Gts() const
{
    return grade_to_s;
}

int Form::get_Gtx() const
{
    return grade_to_x;
}

bool Form::getSign()
{
    return n;
}
void Form::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() <= grade_to_s)
    {
        n = true;
    }
    else
        throw Form::GradeTooLowException();
}
const char* Form::GradeTooHighException::what()  const throw()
{
    return "Grade too Hight .";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too Low .";
}
Form::~Form()
{
}

std::ostream& operator<<(std::ostream& out, Form& obj)
{
    out << obj.getName() << " grade to sign : " << obj.get_Gts() << " grade to execute : " << obj.get_Gtx() << " signed : ";
    if (obj.getSign())
        out << " Yes " << std::endl;
    else
        out << " No " << std::endl;
    return out;
}
