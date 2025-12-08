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



AForm::AForm():name("BOSS"),n(false),grade_to_s(4),grade_to_x(3){}

 AForm::AForm(const std::string& name,const int grade_to_s,const int grade_to_x):name(name),n(false),grade_to_s(grade_to_s), grade_to_x(grade_to_x)
 {
    if (grade_to_s < 1 || grade_to_x < 1)
        throw AForm::GradeTooHighException();
    else if (grade_to_s > 150 || grade_to_x > 150)
        throw AForm::GradeTooLowException();
    else
        std::cout << "Form generated!"<<std::endl;
}
 
AForm::AForm(const AForm& other):name(other.name),n(false),grade_to_s(other.grade_to_s), grade_to_x(other.grade_to_x)
{}

AForm& AForm::operator=(const AForm& other)
{
   (void)other;
    return *this;
}

const std::string AForm::getName() const
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
    return "Grade too Hight . Try to use grade btween 1 to 150.";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too Low . Try to use grade btween 1 to 150.";
}

const char* AForm::signedExecpt::what() const throw()
{
    return "The form not signed \n";
}
AForm::~AForm()
{
    std::cout << "Form " << this->getName() << " destroyed"<< std::endl;
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
