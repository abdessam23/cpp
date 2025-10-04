/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdo <abdo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:33:23 by abdo              #+#    #+#             */
/*   Updated: 2025/10/04 15:08:18 by abdo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "phonebook.hpp"


int checkis_digit(std::string a)
{
  for (int i = 0; a[i] != '\0' ; i++)
  {
    if (std::isdigit(a[i]) == 0)
      return 0;
  }
  return 1;
}
std::string read_input(std::string des)
{
  int i = 0;
  std::string str;
  while(true)
  {
     std::cout << des;
    std::getline(std::cin , str);
    if(std::cin.eof())
    {
      std::cout << "\n EOF." << std::endl;
      exit(0);
    }
    while (str[i] != '\0' && std::isspace(str[i]))
      i++;
    if (str == "\0" || (des == "Enter phone number :" && !checkis_digit(str)))
    {
      if ((des == "Enter phone number :" && !checkis_digit(str)))
         std::cout << "Please enter only digit"<< std::endl;
      continue;
      
    }
      
    break;
  }

  
  return (str.substr(i, str.length()));
}
int convertdjt(int c)
{
  c = c - 48;
  return c;
}
std::string make_it_small(std::string str)
{
  if (str.length() > 10)
  {
    return str.substr(0,9) + ".";
  }
  return str;
}
void add_c(phonebook& a){
      contact b;
          b.setfirstname(read_input("Enter first name :"));
          b.setlastname(read_input("Enter last name :"));
          b.setnickname(read_input("Enter nickname :")) ;
          b.setphonenumber(read_input("Enter phone number :"));
          b.setsecret(read_input("Enter Darkest secret :"));
          a.addcontact(b);
  }
   void search(phonebook a)
  {
    int index;
    std::string str;

    if(a.searchin(0).getfirstname() == "\0")
    {
        std::cout << "The phonebook is empty!" << std::endl;
        return ;
    }
    
    std::cout << " ------------------------------------------------" << std::endl;
    std::cout << " | " << std::setw(5) <<"Index"
              << " | " << std::setw(10) << "First name" 
              << " | " << std::setw(10) << "Last name" 
              << " | " << std::setw(10) << "Nickname" << " |" <<std::endl;
    std::cout << " ------------------------------------------------" << std::endl;
    for(int i = 0; i < 8;i++)
    {
      std::cout << " | " << std::setw(5) << i 
                    << " | "<< std::setw(10) << make_it_small(a.searchin(i).getfirstname())
                    << " | "<< std::setw(10) << make_it_small(a.searchin(i).getlastname())
                    << " | "<< std::setw(10) << make_it_small(a.searchin(i).getnickname()) << " | " << std::endl;
    }
    std::cout << " ------------------------------------------------" << std::endl;
    while (1)
    {
      str = read_input("Enter the index of contact :");
      index = convertdjt(str[0]);
      if (str.length() > 1 || (index < 0 || index > 7))
      {
          std::cout << "Enter only digit from 0 to 7" << std::endl;
          continue;
      }
      else
        break;
    }
    std::cout << " --------------------------------------------------------------------------------------" << std::endl;
    std::cout << " | " << std::setw(5) << "Index"
              << " | " << std::setw(12) << "First name" 
              << " | " << std::setw(12) << "Last name"
              << " | " << std::setw(12) << "Nickname"
              << " | " << std::setw(12) << "Phone number"
              << " | " << std::setw(14) << "Darkest secret" << " | " <<std::endl;
    std::cout << " --------------------------------------------------------------------------------------" << std::endl;
    for(int i = 0; i < 8;i++)
    {
      if (i == index)
          std::cout << " | " << std::setw(5) << i
                    << " | " << std::setw(12) << make_it_small(a.searchin(i).getfirstname()) 
                    << " | " << std::setw(12) << make_it_small(a.searchin(i).getlastname())
                    << " | " << std::setw(12) << make_it_small(a.searchin(i).getnickname())
                    << " | " << std::setw(12) << make_it_small(a.searchin(i).getphonenumber()) 
                    << " | " << std::setw(14)<< make_it_small(a.searchin(i).getsecret())
                    << " | " <<std::endl;
    }
    std::cout << " --------------------------------------------------------------------------------------" << std::endl;
  }
  int prompt(phonebook a)
  {
    std::string line;
      while (1)
      {
          line = read_input("Enter prompt : ");
          if (line == "ADD")
          {
              add_c(a);
          }
           
          else if (line == "SEARCH")
            search(a) ;
          else if (line == "EXIT")
            return 0;
          else
            std::cout << "Please enter a valid prompt : ADD/SEARCH/EXIT" << std::endl;
      }      
  } 
 
int main()
{
  phonebook a;
  prompt(a);
}