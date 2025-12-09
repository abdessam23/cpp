/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:18 by abdo              #+#    #+#             */
/*   Updated: 2025/12/09 10:19:52 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Form f("Contract", 50, 20);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\n";
    try {
        Form bad("BadForm", 0, 10);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form bad2("BadForm2", 200, 10); 
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n\n";
    try {
        Bureaucrat boss("Boss", 1);
        Form f("TopSecret", 10, 5);
        boss.signForm(f); 
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n\n";
    try {
        Bureaucrat worker("worker", 150);
        Form f("ImpossibleForm", 10, 5);
        worker.signForm(f);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
