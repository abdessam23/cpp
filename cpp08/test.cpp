#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(6,5);
    // for (int x: a)
    //     cout << x<<"\n";
    for(int i = 0; i < 6;i++)
    {
        cout<< a[i]<<"\n";
        a.push_back(i);
    }
    
    cout <<a.size()<<std::endl;
}