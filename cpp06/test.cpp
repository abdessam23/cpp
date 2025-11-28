#include <iostream>
#include   <fstream>
using namespace std;

class test
{
private:
   string name;
   int n;
public:
    test();
    test(const string& name, int n):name(name),n(n)
    {
    }
    ~test();

    string getname()
    {
        return name;
    }
    int getnumber()
    {
        return n;
    }
    void serialize(const string& filename)
    {
        ofstream file(filename.c_str(),ios::binary);
        if (!file.is_open())
        {
            cerr << "file doesn't opened!" <<endl;
            return;
        }
        file.write(reinterpret_cast<const char*>(&this->name),sizeof(this->name));
        file.write(reinterpret_cast<const char*>(&this->n),sizeof(this->n));
        file.close();
        cout << "the object serialization successefully." << endl;
    }

    static test deserialize(const string& filename)
    {
        test obj("", 0);
        ifstream file(filename.c_str(),ios::binary);
        if (!file.is_open())
        {
            cerr << "the file doesn't opened!" << endl;
            return obj;
        }
        file.read(reinterpret_cast<char*> (&obj.name), sizeof(obj.name));
        file.read(reinterpret_cast<char*> (&obj.n), sizeof(obj.n));
        file.close();
        cout << "the object  deserialize successfully " <<endl;
        return obj;
    }

};

test::test():name("serialize"),n(4)
{
}

test::~test()
{
}


int main()
{
   test bob("bob",17);
   bob.serialize("data.bin");
   test deserialize = test::deserialize("data.bin");

   cout << "after deserialize " << endl;
   cout << "Name: " << deserialize.getname() << endl;
   cout << "Age: " <<deserialize.getnumber() << endl;
}


