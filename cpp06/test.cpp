
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
        int x = 0x41424344; // ASCII: 'A' 'B' 'C' 'D'
        char* p = reinterpret_cast<char*>(&x);

        std::cout << p[0] << p[1] << p[2] << p[3] << "\n";
        std::cout << p << "\n";
    
    
}
