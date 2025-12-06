/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:52 by abdo              #+#    #+#             */
/*   Updated: 2025/12/06 10:11:40 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):name(name),grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else 
        std:: cout << "Bureaucrat created!"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):name(other.name),grade(other.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return name;
}

int  Bureaucrat::getGrade() const
{
    return grade;
}
 std::ostream& operator<<(std::ostream& out, Bureaucrat& obj)
 {
    out << obj.getName()  << " ,Bureaucrat Grade : " << obj.getGrade();
    return out; 
 } 

void Bureaucrat::increase()
{
    grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrease()
{
    grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what()  const throw()
{
    return "Grade too Hight .";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too Low .";
}

void Bureaucrat::signAForm(AForm& obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << this->getName() << " signed " << obj.getName() << std::endl;
    
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't signed " << obj.getName() << " because : " << e.what() << '\n';
    }
}

void Bureaucrat::executeAForm(AForm const& Form) const
{
    try{
        
        Form.execute(*this);
        std:: cout << this->getName() << " executed "  << Form.getName(); 
    }
    catch(const std::exception& e)
    {
         std::cerr << this->getName() << " couldn't execute " << Form.getName() << " because : " << e.what();
    }
}
Bureaucrat::~Bureaucrat()
{
}