#include <iostream>
//........test insertion ..............
int bsearch(int *a, int target)
{
     int mid,left ,right;
    left = 0;
    right = 1;
    while (left <= right)
    {
        mid = left + (right - left)/2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            right = mid;
        else
            left = mid + 1 ;
    }
    return -1;
}
int main()
{
    int a[]= {0,2,6,7};
    std::cout<< bsearch(a,3) << std::endl;
}