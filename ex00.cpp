#include <iostream>
#include <cctype>

class megaphone
{
public:
    char* uppercase(char* str)
    {
        if (!str)
            return NULL;
        for (int i = 0; str[i] ; i++)
        {
            if (islower(str[i]))
                str[i] -= 32; 
        }
        return (str);
    }
    void printmega(char* message)
    {
        std::cout << message ;
    }
    void printerror()
    {
        std::cout << "* Usage : arg[0] arg[1] ... *" << std::endl;
    }
};

int main(int ac, char** argv)
{
    megaphone str;
    if (ac < 2)
    {
        str.printerror();
        return 0;
    }
    for(int i = 1; i < ac; i++)
    {
        str.printmega(str.uppercase(argv[i]));
    }
    std::cout << std::endl;
}