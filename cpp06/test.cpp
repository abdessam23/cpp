#include <iostream>

int main()
{
    int a =5;

    float b = reinterpret_cast<float>(a);
    char* c = reinterpret_cast<char*>(b);
    std::cout << *b <<std::endl;
    std::cout << c <<std::endl;
}