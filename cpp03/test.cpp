#include <iostream>

class base
{
    private:
    int a = 8;
    
    protected:
    int c = 7;
    public:
    int b = 5;
    int getA(){return a;};
};

class derived: private base
{
    public:
    int getX()
    {
        return c;
    }
    int getb()
    {
        return b;
    }
    int getp()
    {
        return base::getA();
    }

};


int main()
{
    derived a;
    std::cout << a.getb()<< std::endl;//public
    std::cout << a.getp() << std::endl;//private 
    std::cout << a.getX() << std::endl;//protected
}