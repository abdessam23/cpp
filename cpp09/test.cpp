#include <iostream>
#include <vector>
//........test insertion ..............
int bsearch(std::vector<int>& a, int target)
{
    int left,mid,right;
    left = 0;
    right = a.size()-1;
    while (left <= right)
    {
        mid = left +(right - left)/2;
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
   std::vector<int> a= {2,7,9,12,14};
    std::cout<< bsearch(a,7) << std::endl;
}