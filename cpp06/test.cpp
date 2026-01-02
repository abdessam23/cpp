
#include <iostream>
class A
{
    public:
    virtual ~A(){};
    int a;
};
class B
{
    public:
    virtual ~B(){};
    int b;
};

class C: public A,public B
{
    public:
    int c;
};


int main()
{
    C c;
    B* b = static_cast<B*>(&c);
    b->b = 6;
    c.a = 9;
    c.b = 2;
    c.c = 1;
    std::cout << b->b <<std::endl;
    std::cout << c.a << std::endl;
    std::cout <<c.b <<std::endl;

    std::cout << c.c <<std::endl;
}


// c 
// ------------------------
// 0X100 |  0X104 | 0X108 |
// ------------------------
//    A      B       C
//    b = &c + 4;
