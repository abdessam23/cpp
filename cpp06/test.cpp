#include <iostream>

bool isNumber(const std::string& str)
{
    int i = 0;
    int c = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (i  == str.length() || !isdigit(str[i]))
        return false;
    while (i < str.length())
    {
        if (!isdigit(str[i]) && str[i] !='.')
            return false;
        if (str[i] == '.')
            c++;
        i++;
    }
    if (c > 1 || str[str.length() - 1] == '.' )
        return false;
    return true; 
}

int main()
{
    std::string s = "-.5";
    if (isNumber(s))
        std::cout << "is number" << std::endl;
    else
        std::cout << "is not a number" << std::endl;
        return 0;
}