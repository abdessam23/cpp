#pragma once 

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "contact.hpp"

class phonebook
{
    contact b[8];
    int count;
    public:
      phonebook() : count(0){};

      void addcontact(contact& c);
      contact searchin(int i);
};