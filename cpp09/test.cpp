#include <iostream>
#include <vector>
#include <algorithm>
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


int binarysearch(std::vector<int>& a, int target)
{
    int left = 0;
    int right = a.size();
    int mid;
    while (left<= right)
    {
        mid = left + (right - left)/2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] < target)
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return -1;
}
int main()
{
   std::vector<int> a= {2,7,1,6,18,34,61,28,9,12,14};
   std::sort(a.begin(),a.end());
   for (int i = 0;i< a.size();i++)
   {
        std::cout<< a[i]<< std::endl;
   }
std::cout<<binarysearch(a,34) << std::endl;

}


