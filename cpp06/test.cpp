
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
    int x = 0x12345678;
    char* bytes = reinterpret_cast<char*>(&x);

    for (int i = 0; i < sizeof(int); ++i)
        std::cout << std::hex << (int)bytes[i] << " ";

}

