#include <iostream>
using namespace std;

// Base Class declaration
class Base {
public:
    virtual void print() {
        cout << "Base" << endl;
    }
};

// Derived1 class declaration
class Derived1 : public Base {
public:
    void print() {
        cout << "Derived1" << endl;
    }
};

int main() {
    Derived1 d1;

    // Base class pointer holding
    // Derived1 Class object
    Base* bp = &d1;

    // Dynamic_casting
    Derived1* dp2 = dynamic_cast<Derived1*>(bp);
    if (dp2 == nullptr)
        cout << "Casting Failed" << endl;
    else
        cout << "Casting Successful" << endl;

    return 0;
}