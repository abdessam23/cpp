#include <iostream>

int main()
{
    int x = 42;
    int* a  = &x;
    char c = reinterpret_cast<char>(x);
    char* b = static_cast<char*>(a);
    std::cout << *b<<std::endl;
}