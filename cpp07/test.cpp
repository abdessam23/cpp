#include <iostream>

template <typename T> T  max(T x, T y)
{
    return (x > y)? x : y;
}

int main()
{
    std::cout << "the max number is : " << max(8,9) << std::endl;
    std::cout << " the max float number is : "<< max(1.8,1.9) << std::endl;
    std::cout << "the max char :  " << max('h','r') << std::endl;
}