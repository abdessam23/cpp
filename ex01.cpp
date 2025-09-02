/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:24:12 by abdo              #+#    #+#             */
/*   Updated: 2025/09/01 15:53:12 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string> 


class phonebook{
    public:
        char contact[8][5][20];
   
};


class contact{
    public:
   
        void add(phonebook& a){
            int i = 0;
            while (i < 8)
            {
    
                std::cout << "First name :" ;
                std::cin >> a.contact[i][0];
                std::cout << "Last name :" ;
                std::cin >> a.contact[i][1];
                std::cout << "Nickname :";
                std::cin >> a.contact[i][2];
                std::cout << "Phone number :";
                std::cin >> a.contact[i][3];
                std::cout << "Secret :";
                std::cin >> a.contact[i][4];
                i++;     
            }
        }
        void search(phonebook a)
        {
            int index;
            
             std::cout << "| index "<< "| First name" << "| Last name " << "| nickname"  << std::endl;
            for (int i = 0; i < 8; i++)
            {
                std::cout  << "|" << i << "     |" << a.contact[i][0] << "|" << a.contact[i][1] << "|" << a.contact[i][2] << "|" <<std::endl;
            }
            std::cout << "Enter index of the contact:";
            std::cin >> index;
            for (int i = 0; i < 8; i++)
            {
                if (i == index)
                {
                    std::cout << a.contact[i][0] << "|" << a.contact[i][1] << "|" << a.contact[i][2] << "|" << a.contact[i][3] << "|" << a.contact[i][4] << std::endl;
                }
            }
        }
};

int main()
{
    contact a;
    phonebook k;
    char str[7];
    while (1)
    {
        std::cout << "enter prompt:";
        std::cin >> str;
        if(str[0] == 'A')
        {
            a.add(k);
        }
        else if (str[0] == 'S')
        {
            a.search(k);
        }
        else
            break;

    }
    
}