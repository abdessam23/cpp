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

// void swap(int& a,int& b)
// {
//     if (a > b)
//     {
//         int tmp = a;
//         a = b;
//         b = tmp;
//     }
// }

// int bnshearch(std::vector<int>& v, int target)
// {
//     int left = 0;
//     int right = v.size()-1;
//     int mid;
//     while (left<=right)
//     {
//        mid = left + (right - left)/2;
//        if (v[mid] == target)
//             return mid;
//        else if (v[mid] < target)
//             left = mid + 1;
//        else
//             right = mid - 1;
//     }
//     return -1;
// }

// int main()
// {
//    std::vector<int> a= {2,7,1,6,18,34,61,28,9,12,14};
//    int h = a.size()/2;
//    for (int i = 0; i < a.size();i++)
//    {
//         if ((i  + 1 < a.size()) && (a[i] > a[i + 1]))
//         {
//             swap(a[i],a[i + 1]);
            
//         }
//         i++;
//    }

//    std::cout <<" a: ";
//     for (int i = 0; i < a.size();i++)
//    {
//         if ((i  + 1 < a.size()))
//         {
//              std::cout << "{"<<a[i] << ","<< a[i+1] << "}" << " ";
//             i++;
//         }
       
//    }

//    std::vector<int> b(a.size()/2 - 1);
//     int j = 0;
//      for (int i = 0; i < a.size();i++)
//    {
//         if (i + 1 < a.size())
//         {
//           p.first = a[i];
//           p.second = a[i + 1];
//             j++;
//           if (i != 0)
//                a.erase(a.begin() + i);
//         }
//    }

//     std::cout <<"\na: ";
//     for (int i = 0; i < a.size();i++)
//    {
//         std::cout << a[i] << " ";
//    }

//    std::cout <<"\nb: ";
//    for (int i = 0; i <b.size();i++)
//    {
//         std::cout << b[i] << " ";
//    }
// //    std::sort(a.begin(),a.end());
// //    std::cout<<bnshearch(a,6) << std::endl;

// }
void merge(std::vector<int>& P,int l,int m,int r)
{
     std::vector<int> c1,c2;
     int i = 0;
     int n1 = m - l + 1;
     int n2 = r - m;
     std::cout << "c1: ";
     for(int i = 0;i<n1;i++)
     {
          c1[i] = P[l + i];
          std::cout << c1[i] << " ";
     }
     std::cout << "c2: ";
     for(int i = 0;i< n2;i++)
     {
          c2[i] = P[m + i + 1];
          std::cout << c2[i] << " ";
     }
     i = 0;
     int j = 0;
     int k = l;
     while (i <  n1 && j < n2)
     {
          if (c1[i] <= c2[j])
          {
               P[k] = c1[i];
               i++;
          }
          else
          {
               P[k] = c2[j];
               i++;
          }
          k++;
     }
  

     while (i < n1)
     {
          P[k] = c1[i];
          i++;
          k++;
     }

     while (j < n2)
     {
          P[k] = c1[j];
          j++;
          k++;
     }
     
}

void mergsort(std::vector<int>& t,int left,int right)
{
     if(left <= right)
          return;
     std::cout << "here";
     int mid = left+ (right - left)/2;
     mergsort(t,left,mid);
     mergsort(t,mid+1,right);
     merge(t,left,mid,right);
}

int main()
{
   std::vector<int> a= {2,7,1,6,18,34,61,28,9,12,14};
   int n = a.size() - 1;
   mergsort(a,0,n);
   for (int i = 0;i < a.size();i++)
   {
        std::cout << a[i] << std::endl;
   }
}

