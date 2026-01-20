#include <iostream>
#include <vector>
#include <algorithm>


// void merge(std::vector<int>& b,int l,int mid, int right)
// {
//      int n1 = mid - l +1;
//      int n2 = right - mid;
//      std::vector<int> c1(n1),c2(n2);
//      //  std::cout <<  "\n c1:  ";
//      for (int i = 0; i < n1;i++)
//      {
//           c1[i] = b[l + i];
//           // std::cout << c1[i] << " ";
//      }
//      //  std::cout <<  "\n c2:  ";
//      for (int i = 0; i < n2;i++)
//      {
//           c2[i] = b[mid + 1 + i];
//           // std::cout << c2[i] << " ";
//      }
//      int i = 0;
//      int j = 0;
//      int k = l;
//      while (i < n1 &&  j < n2)
//      {
//          if (c1[i] <= c2[j])
//          {
//                b[k] = c1[i];
//                i++;
//          }
//          else
//          {
//                b[k] = c2[j];
//                j++;
//          }
//          k++;
//      }

//      while (i < n1)
//      {
//         b[k] = c1[i];
//         i++;
//         k++;
//      }
//       while (j < n2)
//      {
//         b[k] = c2[j];
//         j++;
//         k++;
//      }
// }

// void mergsort(std::vector<int>& p,int left,int right)
// {
//      if(left >= right)
//           return;
//      int mid = left + (right - left)/2;
//      mergsort(p,left,mid);
//      mergsort(p,mid + 1,right);
//      merge(p,left,mid,right);
// }

// void merge(std::vector<int>& v,int l,int m,int r)
// {
//      int n1 = m - l + 1 ;
//      int n2 = r - m ;
//      std::vector<int> c1(n1),c2(n2);
//      std::cout << "\nc1 : ";
//      for(int i = 0;i < n1;i++)
//      {
//           c1[i] = v[l + i];
//           std::cout << c1[i] << " ";
//      }
//        std::cout << "\nc2 : ";
//      for(int i = 0;i < n2;i++)
//      {
//           c2[i] = v[m + i  + 1];
//           std::cout << c2[i] << " ";
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
//      int middle = left + (right - left)/2;
//      mergsort(a,left,middle);
//      mergsort(a,middle + 1, right);
//      merge(a,left,middle,right);
// }

void insersort(std::vector<int>& v, int size)
{
     for (int i = 1;i < size;i++)
     {
          int key = v[i];
          int j = i - 1;
          while (j >= 0 && v[j] > key)
          {
               v[j + 1] = v[j];
               j--;
          }
          v[j + 1] = key;
     }
}

int main()
{
   std::vector<int> a= {2,7,1,6,18,34,61,28,6,9,12,14};
   int n = a.size();
  insersort(a,n);
   for (int i = 0;i < a.size();i++)
   {
        std::cout << a[i] << std::endl;
   }
}

