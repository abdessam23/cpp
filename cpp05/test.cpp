#include <iostream>


int main()
{
    int x = 7;
    try{
        if (x%2 != 0)
            throw -2;
    }
    catch(int e)
    {
        std::cout << "the exeption type is :  " << e<< std::endl;
    }
}

