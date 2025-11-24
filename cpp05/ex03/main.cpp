/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/11/24 09:43:00 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Intern.hpp"

int main()
{

    Intern someRandomIntern;
    AForm* rrf = someRandomIntern.makeForm("presidential pardon", "boss");
    AForm* rf = someRandomIntern.makeForm("shrubbery creation", "home");
    AForm* f = someRandomIntern.makeForm("robotomy request", "robot");
    
    delete rrf;
    delete rf;
    delete f;
}