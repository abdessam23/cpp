#include <iostream>

size_t jacobsthal(size_t n)
{
    if (n == 0) return 0;
     if (n == 1) return 1;
    size_t power =  (1<< (n));
    return (n%2 == 0)? (power - 1)/ 3: (power + 1)/3;
}

size_t jacobsthal1(size_t n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    size_t prev2 = 0, prev1 = 1, curr = 0;
    for (size_t i = 2; i <= n; i++)
    {
        curr  = prev1 + 2 * prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}
int main()
{
    std::cout << jacobsthal(0) <<std::endl;
    std::cout << jacobsthal(1) <<std::endl;
    std::cout << jacobsthal(2) <<std::endl;
    std::cout << jacobsthal(3) <<std::endl;
    std::cout << jacobsthal(4) <<std::endl;
    std::cout << jacobsthal(5) <<std::endl;
    std::cout << jacobsthal(6) <<std::endl;
    std::cout << jacobsthal(7) <<std::endl;
    // this jacobscall
    std::cout << jacobsthal1(0) <<std::endl;
    std::cout << jacobsthal1(1) <<std::endl;
    std::cout << jacobsthal1(2) <<std::endl;
    std::cout << jacobsthal1(3) <<std::endl;
    std::cout << jacobsthal1(4) <<std::endl;
    std::cout << jacobsthal1(5) <<std::endl;
    std::cout << jacobsthal(6) <<std::endl;
    std::cout << jacobsthal(7) <<std::endl;


}