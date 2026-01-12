#include <iostream>

int  main()
{
    int arr[] = {4,5,8,7,9,1,0};
    for (int i =0;i < 7;i++)
    {
        for (int j =i + 1;j < 7;j++)
        {
            if (arr[j] < arr[i])
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    for(int i =0;i < 7;i++)
    {
        std::cout << arr[i] << std::endl;
    }
}