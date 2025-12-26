#include <iostream>
using namespace std;

// Base Class declaration
class Base {
public:
    virtual  void print() {
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
class Derived2 : public Base
{
    public :
        void print()
        {
            cout << "derived2" << endl;
        }
};

int main() {
    // Derived1 d1;

    // Base class pointer holding
    // Derived1 Class object
    Derived2* bp  = new Derived2();

    // Dynamic_casting
    if (dynamic_cast<Derived1*>(bp))
    {
        Derived1* dp2 = dynamic_cast<Derived1*>(bp);
        cout << "Casting Successful" << endl;
    }
    else
        cout << "Casting Failed" << endl;
        

    return 0;
}