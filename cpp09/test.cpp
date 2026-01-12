#include <iostream>
//........test insertion ..............


int main()
{
    int a[]= {8,4,2,6,0,99,43,3,71};
    for (int i = 1; i < 9;i++)
    {
        int j = i - 1;
        int key = a[i];
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (int i = 0;i < 9;i++)
    {
        std::cout << a[i] <<std::endl;
    }
}