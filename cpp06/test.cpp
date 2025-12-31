#include <iostream>

void print(int& s)
{
  
    std::cout << s<<std::endl;

}

int main()
{
    const int s = 5;
    
    print(const_cast<int&>(s));
}