/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:18:15 by abdo              #+#    #+#             */
/*   Updated: 2025/12/08 17:58:10 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form():name("Boss"),n(false),grade_to_s(1), grade_to_x(60){}

 Form::Form(const std::string& name,const int grade_to_s,const int grade_to_x):name(name),n(false),grade_to_s(grade_to_s), grade_to_x(grade_to_x)
 {
     if (grade_to_s < 1 || grade_to_x < 1)
        throw Form::GradeTooHighException();
    else if (grade_to_s > 150 || grade_to_x > 150)
        throw Form::GradeTooLowException();
    else
        std::cout << "Form created!"<< std::endl;
}
 
Form::Form(const Form& other):name(other.name),n(false),grade_to_s(other.grade_to_s), grade_to_x(other.grade_to_x)
{}

Form& Form::operator=(const Form& other)
{
   (void)other;
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
        n = true;
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
    std::cout << "Form destroyed!"<<std::endl;
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
