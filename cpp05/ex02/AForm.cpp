/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:18:15 by abdo              #+#    #+#             */
/*   Updated: 2025/11/17 15:51:06 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"



AForm::AForm():name("Boss"),n(0),grade_to_s(1), grade_to_x(60){}

 AForm::AForm(const std::string name,bool n,const int grade_to_s,const int grade_to_x):name(name),n(n),grade_to_s(grade_to_s), grade_to_x(grade_to_x)
 {
     if (grade_to_s < 1 || grade_to_x < 1)
    {
        throw AForm::GradeTooHighException();
    }
    if (grade_to_s > 150 || grade_to_x > 150)
    {
        throw AForm::GradeTooLowException();
    }
}
 
AForm::AForm(const AForm& other):name(other.name),n(other.n),grade_to_s(other.grade_to_s), grade_to_x(other.grade_to_x)
{}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
       *this = other;
    }
    return *this;
}

std::string AForm::getName() const
{
    return name;
}

int AForm::get_Gts() const
{
    return grade_to_s;
}

int AForm::get_Gtx() const
{
    return grade_to_x;
}

bool AForm::getSign() const
{
    return n;
}
void AForm::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() <= grade_to_s)
    {
        n = true;
    }
    else
        throw AForm::GradeTooLowException();
}
const char* AForm::GradeTooHighException::what()  const throw()
{
    return "Grade too Hight .";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too Low .";
}
AForm::~AForm()
{
}
void   AForm::setName(std::string name)
{
    name = name;
}
void AForm::set_Gts(int n1)
{
    grade_to_s = n1;
}
void  AForm::set_Gtx(int n2)
{
    grade_to_x = n2;
}
void  AForm::setSign(bool n3)
{
    n = n3;
}
std::ostream& operator<<(std::ostream& out,const AForm& obj)
{
    out << obj.getName() << " grade to sign : " << obj.get_Gts() << " grade to execute : " << obj.get_Gtx() << " signed : ";
    if (obj.getSign())
        out << " Yes " << std::endl;
    else
        out << " No " << std::endl;
    return out;
}
