#include <iostream>

int main()
{
    int a =5;

    int* b = static_cast<int*>(&a);
    char* c = reinterpret_cast<char*>(b);
    std::cout << *b <<std::endl;
    std::cout << c <<std::endl;
}