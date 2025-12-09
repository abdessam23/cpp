#include <iostream>
void fun1()
{
    std::cout << "fun1 start "<< std::endl;
    throw 10;
    std::cout << " fun1 end "<< std::endl;
}

void fun2()
{
    std::cout << "fun2 start "<< std::endl;
    fun1();
    std::cout << "fun2 end "<< std::endl;
}

void fun3()
{
    std::cout << "fun3 start"<< std::endl;
    fun2();
    std::cout << "fun3 end"<<std::endl;
}
int main()
{
    fun3();   
    try
    {
       
    }
    catch(...)
    {
        std::cerr <<"throw int  "<< '\n';
    }
    std::cout << "the program end"<< std::endl;

}