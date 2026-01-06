#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
   stack<int> n;
   n.push(4);
   
   n.push(7);
   n.push(3);
   n.push(9);
   n.push(77);
   std::cout << n.top()<<endl;
   n.pop();
   cout << n.top()<<endl;
   n.pop();
   cout << n.top()<<endl;
   n.pop();
   cout << n.top()<<endl;
   n.pop();
   cout << n.top()<<endl;
}