
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
    int x = 42;

    int* vp = &x;                    // implicit conversion to void*
    void* ip = static_cast<void*>(vp);  // static_cast back to int*

    std::cout << *vp << std::endl;    // prints 42
}

