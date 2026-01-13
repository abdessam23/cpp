#include <iostream>
//........test insertion ..............
int bsearch(int *a, int target)
{
     int mid,left ,right;
    left = 0;
    right = 8;
    while (left <= right)
    {
        mid = left + (right - left)/2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            right = mid;
        else
            left = mid;
    }
    return -1;
}
int main()
{
    int a[]= {0,2};
    std::cout<< bsearch(a,43) << std::endl;
}