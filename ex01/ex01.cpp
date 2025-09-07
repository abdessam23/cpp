
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
std::string read_input()
{
  int i = 0;
  std::string str;
  while(true)
  {
    std::getline(std::cin , str);
    if(std::cin.eof())
    {
      std::cout << "\nThe program exit because EOF." << std::endl;
      exit(0);
    }
    if (str == "\0")
      continue;
    break;
  }

  while (str[i] != '\0' && std::isspace(str[i]))
      i++;
  return (str.substr(i, str.length()));
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
    return str.substr(0,10) + ".";
  }
  return str;
}
void add_c(phonebook& a){
    std::string y;
   for (int i = 0 ; i < 8 ; i++)
   {
      std::cout << "Enter first name :";
      a.b[i].firstname = read_input();
      if (a.b[i].firstname == "\0")
        return;
      std::cout << "Enter last name :" ;
      a.b[i].lastname = read_input();
      if (a.b[i].lastname == "\0")
        return;
      std::cout << "Enter nickname :" ;
      a.b[i].nickname = read_input() ;
       if (a.b[i].nickname == "\0")
        return;
       while (1)
      {
         std::cout << "Enter phone number :" ;
         a.b[i].phonenumber = read_input();
       
         
         if (!checkis_digit(a.b[i].phonenumber))
          {
            std::cout << "please enter only digit"<< std::endl;
            continue;
          }
          break;
      }
      std::cout << "Enter secret :";
      a.b[i].secret = read_input();;
       if (a.b[i].secret == "\0")
        return;
      if (i == 7)
      {
          while (1)
          {
            std::cout << "If you want to add contact please type y/n : ";
            y = read_input();
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
    std::cout << " | " << std::setw(5) <<  std::left <<"Index"
              << " | " << std::setw(10) << "First name" 
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
      std::cout << "Enter the index of contact :" ;
      str = read_input();
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
          line = read_input();
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