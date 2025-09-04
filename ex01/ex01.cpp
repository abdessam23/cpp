#include <iostream>
#include <string>
#include "phonebook.hpp"
#include <iomanip>
int checkis_digit(std::string a)
{
  for (int i = 0; a[i] != '\0' ; i++)
  {
    if (std::isdigit(a[i]) == 0)
      return 0;
  }
  return 1;

    
}
int convertdjt(int c)
{
  c = c - 48;
  return c;
}
std::string make_it_small(std::string& str)
{
  if (str.length() > 10)
  {
    return str.substr(0,10);
  }
  return str;
}
void add_c(phonebook& a){
    std::string y;
   for (int i = 0 ; i < 8 ; i++)
   {
      std::cout << "Enter first name :";
      std::getline(std::cin, a.b[i].firstname);
      std::cout << "Enter last name :" ;
      std::getline(std::cin, a.b[i].lastname);
      std::cout << "Enter nickname :" ;
      std::getline(std::cin, a.b[i].nickname);
       while (1)
      {
         std::cout << "Enter phone number :" ;
         std::getline(std::cin, a.b[i].phonenumber);
         if (a.b[i].phonenumber == "\0")
            continue;
         if (!checkis_digit(a.b[i].phonenumber))
          {
            std::cout << "please enter only digit"<< std::endl;
            continue;
          }
          break;
      }
      // std::cout << "Enter phone number :";
      // std::getline(std::cin, a.b[i].phonenumber);
      std::cout << "Enter secret :";
      std::getline(std::cin, a.b[i].secret);
      if (i == 7)
      {
          while (1)
          {
            std::cout << "If you want to add contact please type y/n : ";
            std::getline(std::cin,y);
            if (y == "y")
            {
              i = 0;
              break;
            }
            else if ( y != "y" && y != "n" )
              continue;
            else
              break;
          }
      }
      
   }
  }
   void search(phonebook a)
  {
    int index;
    std::string str;

    if(a.b[0].firstname == "\0")
    {
        std::cout << "the phonebook is empty!" << std::endl;
        return ;
    }
    
    std::cout << " ------------------------------------------------" << std::endl;
    std::cout << " | " << std::setw(5) << "Index"
              << " | " << std::setw(10) << std::left << "First name" 
              << " | " << std::setw(10) << "Last name" 
              << " | " << std::setw(10) << "Nickname" << " |" <<std::endl;
    std::cout << " ------------------------------------------------" << std::endl;
    for(int i = 0; i < 8;i++)
    {
      std::cout << " | " << std::setw(5) << i 
                    << " | "<< std::setw(10) << make_it_small(a.b[i].firstname)
                    << " | "<< std::setw(10) << make_it_small(a.b[i].lastname)
                    << " | "<< std::setw(10) << make_it_small(a.b[i].nickname) << " | " << std::endl;
    }
    std::cout << " ------------------------------------------------" << std::endl;
    while (1)
    {
      std::cout << "enter the index of contact :" ;
      std::getline(std::cin,str);
      index = convertdjt(str[0]);
      if (index < 0 || index > 7)
      {
          std::cout << "Enter only digit from 0 to 7" << std::endl;
          continue;
      }
      else
        break;
    }
    std::cout << " ------------------------------------------------------------------------------------" << std::endl;
    std::cout << " | " << std::setw(5) << "Index"
              << " | " << std::setw(12) << "First name" 
              << " | " << std::setw(12) << "Last name"
              << " | " << std::setw(12) << "Nickname"
              << " | " << std::setw(12) << "Phone number"
              << " | " << std::setw(12) << "secret" << " | " <<std::endl;
    std::cout << " ------------------------------------------------------------------------------------" << std::endl;
    for(int i = 0; i < 8;i++)
    {
      if (i == index)
          std::cout << " | " << std::setw(5) << i
                    << " | " << std::setw(12) << make_it_small(a.b[i].firstname) 
                    << " | " << std::setw(12) << make_it_small(a.b[i].lastname)
                    << " | " << std::setw(12) << make_it_small(a.b[i].nickname)
                    << " | " << std::setw(12) << make_it_small(a.b[i].phonenumber) 
                    << " | " << std::setw(12)<< make_it_small(a.b[i].secret)
                    << " | " <<std::endl;
    }
    std::cout << " ------------------------------------------------------------------------------------" << std::endl;
  }
  int prompt(phonebook a)
  {
    std::string line;
      while (1)
      {
          std::cout << "Enter prompt : " ;
          std::getline(std::cin, line);
          if(line == "\0")
              return 0;
          if (line == "ADD")
          {
              add_c(a);
          }
           
          else if (line == "SEARCH")
            search(a);
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