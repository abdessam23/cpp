/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:58:21 by abhimi            #+#    #+#             */
/*   Updated: 2026/01/15 11:14:54 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void castfloat(float& n)
{
    n = static_cast<int>(n);
}

void addString(const std::string str)
{
   std::cout << str;
}
void addone(int& a)
{
    std::cout<<a<<std::endl;
}

int main()
{

    int arr[4] = {1,2,3,5};
    const int a = 4;
   const std::string str[3]= {"hello","world","ok"};
    std::cout<<"----------------Array of int -------------- \n\n" ;
    iter(arr,a,addone1);
    std::cout<<"\n\n-------------------String -------------- \n\n";
    iter(str,3,addString);
    for(size_t i = 0;i < 3;i++)
    {
        std::cout << str[i]<<",";
    }
    std::cout<<" \n\n-------------------Float -------------- \n\n";
    float f[4] = {1.5,7.4,3.9,5.2};
    iter(f,4,castfloat);
    for(size_t i = 0;i < 4;i++)
    {
        std::cout << f[i]<<",";
    }
    std::cout << "\n\n";
    return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   const int len = 5;

//   iter( tab, len, print<const int> );
//   iter( tab2, len, print<Awesome> );

//   return 0;
// }