#include <iostream>
#include "cc.hpp"
template<typename T>
 void fun(const T& p){
    std::cout << p<< std::endl; 
 }
template<int> void fun<int>(int a);
 int main()
 {
    // int a = 8;
    fun(8);
 }