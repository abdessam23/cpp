
#include <iostream>
class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void hello() {
        static int x =3;
        std::cout << ++x <<std::endl;
    }
};

int main() {
       Base *b =  new Base();
       Derived* k = dynamic_cast<Derived*> (b);
       if(!k)
        std::cout << "casting failed "<< std::endl;
        else
            std::cout << "casting successfuly"<< std::endl;

    
}
