#include <iostream>

template<typename T>
 void fun(const T& p){
    std::cout << p<< std::endl; 
 }

 int main()
 {
    // int a = 8;
    fun(8);
 }