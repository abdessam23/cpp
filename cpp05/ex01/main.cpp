/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/07 10:35:30 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    try
    {
        Bureaucrat a("Boss", 2);
        Form b("contract",2,3);
        a.signForm(b);  
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}