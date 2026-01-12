#include <iostream>
//........test insertion ..............
// int  main()
// {
//     int arr[] = {4,5,8,7,9,1,0};
//     for (int i =1;i < 7;i++)
//     {
//         int k = arr[i];
//         int j = i -1;
//        while (j >= 0 && arr[j] > k)
//         {
//            arr[j + 1] = arr[j];
//            j = j-1;
//         }
//         arr[j + 1] = k;
//     }
//     for(int i =0;i < 7;i++)
//     {
//         std::cout << arr[i] << std::endl;
//     }
// }


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