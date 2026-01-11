#include <iostream>

class Bad {
private:
    int* data;

public:
    // No destructor, no copy constructor, no copy assignment operator
    Bad(const Bad& other)
    {
        data = new int();
        *this->data = *other.data;
    }
    Bad(int val) {
        data = new int(val);
    }
    void print() {
        std::cout << "Value: " << *data << std::endl;
    }
    ~Bad()
    {
        delete data;
    }
};

int main() {
    Bad a(42);
    Bad b = a;  // Implicit copy constructor does shallow copy!

    a.print();
    b.print();

    // When main ends, both 'a' and 'b' destructors are called,
    // both will try to delete the same pointer -> DOUBLE DELETE!
}

