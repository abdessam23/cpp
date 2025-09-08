#pragma once 

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "contact.hpp"

class phonebook
{
  public:
   contact b[8];
   int count;
   phonebook() : count(0){};
};