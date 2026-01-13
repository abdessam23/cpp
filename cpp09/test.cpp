#include <iostream>
#include <vector>
//........test insertion ..............
// int bsearch(std::vector<int>& a, int target)
// {
//     int left,mid,right;
//     left = 0;
//     right = a.size()-1;
//     while (left <= right)
//     {
//         mid = left +(right - left)/2;
//         if (a[mid] == target)
//             return mid;
//         else if (a[mid] < target)
//             left = mid + 1;
//         else
//             right = mid - 1;
//     }
//     return -1;
// }
int main()
{
   std::vector<int> a= {2,7,1,6,18,34,61,28,9,12,14};
    for (int i = 1;i < a.size();i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0&& a[j] > key)
        {
            a[j + 1] =  a[j];
            j--;
        }
        a[j+1] = key;
    }
    
    for (int i = 1;i < a.size();i++)
    {
        std::cout<<a[i] << std::endl;
    }
}


