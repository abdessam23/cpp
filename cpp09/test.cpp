#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ctime>

int main() {
    
    int n ;
    std::string s = "f98w";
    std::stringstream ss(s);
    ss >> n;
    std::cout << n << std::endl;
    return 0;
}
