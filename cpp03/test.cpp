#include <iostream>

class base
{
  public:
  int i;
  base()
  {
     i = 10;
    std::cout << "base created" << std::endl;
  }
   void fun1()
  {
    std::cout << "base fun1 " << std::endl;
  }

   void fun2()
  {
    std::cout << "base fun2 " << std::endl;
  }

  virtual void  fun3()
  {
    std::cout << "base fun3 " << std::endl;
  }
  base(const base& other)
  {
    *this = other;
  }
};

class derived1: virtual public base
{
    public:
    void fun2()
    {
        std:: cout << "derived fun2" << std::endl;
    }
    derived1()
    {
  
    }

};

class  derived2 :virtual public base
{
public:
   void fun3() 
    {
        std::cout << "derived 2 fun 3" << std::endl;
    }
    derived2()
    {
    }
};

class  derived3 :public derived1, public derived2
{
public:
    void fun3() 
    {
        std::cout << "derived 3 fun 3" << std::endl;
    }
    derived3()
    {
    }
};


int main()
{
    // base a;
    // derived1 b;
    // derived2 c;
    base *b = new derived3();

    b->fun3();
    // c.fun1();
    // c.fun2();
    // c.fun3();

}