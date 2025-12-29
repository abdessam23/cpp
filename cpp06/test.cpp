
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
       Base *b =  new Derived();
       Derived* k = dynamic_cast<Derived*> (b);
    
}
