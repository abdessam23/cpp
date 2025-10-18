/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:24:03 by abdo              #+#    #+#             */
/*   Updated: 2025/10/04 15:00:37 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>


std::string uppercase(std::string str)
{
    for (int i = 0; str[i] ; i++)
    {
        if (std::islower(str[i]))
            str[i] = std::toupper(str[i]);
    }
        return (str);
}
void printmega(std::string message)
{
    std::cout << message ;
}
void printerror()
{
    std::cout << "* Usage : arg[0] arg[1] ... *" << std::endl;
}

int main(int ac, char** argv)
{
    if (ac < 2)
    {
        printerror();
        return 0;
    }
    for(int i = 1; i < ac; i++)
    {
        std::string str =argv[i];
        printmega(uppercase(str));
        printmega(" ");
    }
    std::cout << std::endl;
}