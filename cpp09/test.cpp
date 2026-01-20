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

void split_element(std::vector<int>& arr)
{
    size_t n = arr.size()/2; 
    std::vector<int> a1(n);
    std::vector<int> a2(n);
    int j = 0;
    for(int i = 0;i < n;i++)
    {
        if (j%2 == 0)
        {
            a1[i] = arr[j];
        }
        j++;
    }
     for(int i = 0;i < n;i++)
    {
        if (i%2 != 0)
        {
            a2[i] = arr[i];
        }
    }
    std::cout << "\na1 : ";
    for(int i = 0;i < n;i++)
    {
        std::cout << a1[i] << " ";
    }

    std::cout << "\na2 : ";
    for(int i = 0;i < n;i++)
    {
        std::cout << a2[i] << " ";
    }
    std::cout <<std::endl;
    
}
void sortelemet(std::vector<int>& a)
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
     sortelemet(a);
      std::cout << "a : ";
    for(int i = 0;i < n;i++)
    {
        std::cout << a[i] << " ";
    }
     split_element(a);
   
}

