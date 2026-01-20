#include <iostream>
#include <vector>
#include <algorithm>


// void merge(std::vector<int>& v,int l,int m,int r)
// {
//      int n1 = m - l + 1 ;
//      int n2 = r - m ;
//      std::vector<int> c1(n1),c2(n2);
     
//      for(int i = 0;i < n1;i++)
//      {
//           c1[i] = v[l + i];
//      }
//      for(int i = 0;i < n2;i++)
//      {
//           c2[i] = v[m + i  + 1];
//      }
//      int i = 0;
//      int j = 0;
//      int k = l;
//      while (i < n1 && j < n2)
//      {
//           if (c1[i] <= c2[j])
//           {
//                v[k] = c1[i];
//                i++;
//           }
//           else
//           {
//                v[k] = c2[j];
//                j++;
//           }
//           k++;
//      }
//      while (i < n1)
//      {
//          v[k] = c1[i];
//          i++;
//          k++;
//      }
//      while (j < n2)
//      {
//          v[k] = c2[j];
//          j++;
//          k++;
//      }
// }


// void mergsort(std::vector<int>& a,int left,int right)
// {
//      if(left >= right)
//           return;
//     static int n = 0;
//     n++;
//      std::cout << "arr "<< n << " : ";
//      for (int i = 0;i < a.size();i++)
//      {
//           std::cout << a[i] << " ";
//      }
//       std::cout << "\n";
//      int middle = left + (right - left)/2;
//      mergsort(a,left,middle);
//      mergsort(a,middle + 1, right);
//      merge(a,left,middle,right);
// }

void insertionsort(std::vector<int>& arr)
{
    for (int i = 1;i<arr.size();i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int serchLineir(std::vector<int>& a, int target)
{
     for (int i = 0; i < a.size(); i++)
     {
          if (target < a[i]) {
               return i;
          }
     }
     return -1;
}

int binarySearch(std::vector<int>& a, int target, int start, int end)
{
     std::cout << "start "  << start << ", end " << end << std::endl;
     if (start >= end) {
          return start;
     }
     int mid = start+(end - start) / 2;
     if (a[mid] < target) {start = mid+1;}
     else {end = mid;}
     return binarySearch(a, target, start, end-1);
     // return serchLineir(a, target);
}

void split_element(std::vector<int>& arr)
{
    size_t n = arr.size()/2; 
    size_t size = arr.size();
    std::vector<int> a2(n);
    
    
    int j = 0;
    for(int i = 0;i < arr.size();i++)
    {
        if (i%2 != 0 && j < n)
        {
            a2[j] = arr[i];
            j++;
        } 
    }
    j = 0;
    if (size%2 != 0)
          n+= 1;
    std::vector<int> a1(n);
     for(int i = 0;i < arr.size();i++)
    {
        if (i%2 == 0 && j < n)
        {
            a1[j] = arr[i];
            j++;
        }
    }
    if (size%2 != 0)
          a1[n] = arr[size];

     insertionsort(a2);
     std::cout << "\na2 : ";
    for(int i = 0;i < a2.size();i++)
    {
        std::cout << a2[i] << " ";
    }
        std::cout << "\na1 : ";
    for(int i = 0;i <a1.size();i++)
    {
        std::cout << a1[i] << " ";
    }
    std::cout <<std::endl;
     for(int i = 0;i < a1.size();i++)
     {
          int s = binarySearch(a2,a1[i], 0, a2.size()-1);
          std::cout << " index : " << s <<std::endl;
          a2.insert(a2.begin() + s, a1[i]);

     }
    
    std::cout << "\na2 : ";
    for(int i = 0;i < a2.size();i++)
    {
        std::cout << a2[i] << " ";
    }


}


void sort_pair(std::vector<int>& a)
{
     for (int i = 0; i < a.size();i++)
     {
          if (i + 1 < a.size() && a[i] > a[i + 1])
          {
               int tmp;
               tmp = a[i];
               a[i] = a[i + 1];
               a[i + 1]  = tmp;
          }
          i++;
     }
}
// {4,1,3,5,6,2,8,0}
int main()
{
   std::vector<int> a= {4,1,3,5,6,2,8,0,7};
   int n = a.size();
//    mergsort(a,0,n);
     sort_pair(a);
      std::cout << "a : ";
    for(int i = 0;i < n;i++)
    {
        std::cout << a[i] << " ";
    }
     split_element(a);
   
}

