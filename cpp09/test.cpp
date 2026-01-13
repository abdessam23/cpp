#include <iostream>
//........test insertion ..............
int bsearch(int *a, int target)
{
     int mid,left ,right;
    left = 0;
    right = 3;
    while (left <= right)
    {
        mid = left + (right - left)/2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            right = mid - 1;
        else
            left = mid + 1 ;
    }
    return -1;
}
int main()
{
    int a[]= {2,7};
    std::cout<< bsearch(a,2) << std::endl;
}