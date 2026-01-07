#include <iostream>
#include <list>
#include <stack>
using namespace std;
int main()
{
  std::list<int> a = {3,6,7};
  a.push_back(1);
  a.push_front(9);

//   a.pop_back();
  std::list<int>::iterator it = a.begin();
  std::advance(it,3);
  a.erase(it);
//   a.clear();
//   if (a.empty())
//    cout << "yes is empty!\n";
  for(auto i :a)
  {
      cout << i <<"\n";
  }
}