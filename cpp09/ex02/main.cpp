#include "PmergeMe.hpp"
 
int main(int ac, char** arg)
{
    if(ac < 2)
    {
        std::cerr<< "Error please enter one integers or more "<< std::endl;
        return 1;
    }
   try 
   {
      PmergeMe pm(arg);
      pm.sort();
         
    }
   catch(const std::exception& e)
   {
        std::cout << e.what() << std::endl;
        return 1;
   }
   return 0;   
}