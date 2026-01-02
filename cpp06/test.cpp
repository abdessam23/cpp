
#include <iostream>
class A
{
    public:
    int a;
};
class B
{
    public:
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
    std::cout << b->b <<std::endl;
}


// c 
// ------------------------
// 0X100 |  0X104 | 0X108 |
// ------------------------
//    A      B       C
//    b = &c + 4;
