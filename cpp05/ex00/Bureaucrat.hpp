/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:38:08 by abdo              #+#    #+#             */
/*   Updated: 2025/11/14 11:50:02 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#include <exception>

class Bureaucrat : public std::exception
{
private:
   const std::string name;
   int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string name,int grade): name(name)
    {
        if (grade < 1 || grade > 150)
        {
            throw exception::
        }
    }
    ~Bureaucrat();
};

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}
