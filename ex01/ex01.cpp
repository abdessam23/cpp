#include <iostream>
#include <string>
#include "phonebook.h"
#include <iomanip>
// int checkis_digit(std::string a)
// {
//   for (int i; a[i] != '\0' ; i++)
//   {
//     if (std::isdigit(a[i]) == 0)
//       return 0;
//   }
//   return 1;

//      while (1)
//       {
//          std::cout << "Enter phone number :" ;
//          std::getline(std::cin, a.b[i].PHONE);
//          if (!checkis_digit(a.b[i].PHONE))
//           {
//             std::cout << "please enter only digit"<< std::endl;
//             continue;
//           }
//           break;
//       }
// }
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
      std::getline(std::cin, a.b[i].fn);
      std::cout << "Enter last name :" ;
      std::getline(std::cin, a.b[i].Ln);
      std::cout << "Enter nickname :" ;
      std::getline(std::cin, a.b[i].NK);
      std::cout << "Enter phone number :";
      std::getline(std::cin, a.b[i].PHONE);
      std::cout << "Enter secret :";
      std::getline(std::cin, a.b[i].sec);
      if (i == 7)
      {
          while (1)
          {
            std::cout << "If you want to add contact please type y/n : ";
            std::getline(std::cin,y);
            if (y == "y")
            {
              i = 6;
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

    if(a.b[0].fn == "\0")
    {
        std::cout << "the phonebook is empty!" << std::endl;
        return ;
    }
    
    std::cout << " ------------------------------------------------------" << std::endl;
    std::cout << " | " << std::setw(5) << "Index"
              << " | " << std::setw(12) << "First name" 
              << " | " << std::setw(12) << "Last name" 
              << " | " << std::setw(12) << "Nickname" << " |" <<std::endl;
    std::cout << " ------------------------------------------------------" << std::endl;
    for(int i = 0; i < 8;i++)
    {
      std::cout << " | " << std::setw(5) << i 
                    << " | "<< std::setw(12) << make_it_small(a.b[i].fn)
                    << " | "<< std::setw(12) << make_it_small(a.b[i].Ln)
                    << " | "<< std::setw(12) << make_it_small(a.b[i].NK) << " | " << std::endl;
    }
    std::cout << " ------------------------------------------------------" << std::endl;
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
              << " | " << std::setw(12) << "Phonenumber"
              << " | " << std::setw(12) << "Secret" << " |" <<std::endl;
    std::cout << " ------------------------------------------------------------------------------------" << std::endl;
    for(int i = 0; i < 8;i++)
    {
      if (i == index)
          std::cout << " | " << std::setw(5) << i
                    << " | " << std::setw(12) << make_it_small(a.b[i].fn) 
                    << " | " << std::setw(12) << make_it_small(a.b[i].Ln)
                    << " | " << std::setw(12) << make_it_small(a.b[i].NK)
                    << " | " << std::setw(12) << make_it_small(a.b[i].PHONE) 
                    << " | " << std::setw(12)<< make_it_small(a.b[i].sec)
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