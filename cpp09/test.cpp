#include <iostream>
#include <vector>
#include <algorithm>
// int binarysearch(std::vector<int>& a, int target)
// {
//     int left = 0;
//     int right = a.size();
//     int mid;
//     while (left<= right)
//     {
//         mid = left + (right - left)/2;
//         if (a[mid] == target)
//             return mid;
//         else if (a[mid] < target)
//             left = mid + 1;
//         else 
//             right = mid - 1;
//     }
//     return -1;
// }


int bnshearch(std::vector<int>& v, int target)
{
    int left = 0;
    int right = v.size()-1;
    int mid;
    while (left<=right)
    {
       mid = left + (right - left)/2;
       if (v[mid] == target)
            return mid;
       else if (v[mid] < target)
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
  
std::cout<<bnshearch(a,6) << std::endl;

}


