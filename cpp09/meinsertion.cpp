#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>

void create_pairs(std::vector<int>& arr,std::vector<int>& m,std::vector<int>& p)
{
    int i = 0;
    int n = arr.size();
    while(i < n-1)
    {
        if (arr[i] < arr[i + 1])
        {
            m.push_back(arr[i + 1]);
            p.push_back(arr[i]);
        }
        else
        {
            m.push_back(arr[i]);
            p.push_back(arr[i + 1]);
        }
        i+=2;
    }
    if (n%2 != 0)
        p.push_back(arr[n - 1]);

}
int jacobsthal(int n)
{
    int j  = 1 << (n + 1);
    int one = (n%2==0)? 1: (-1);

    return ((j + one) /3);
}
int binarySearch(std::vector<int> &a, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start)/2;
      
        if (a[mid] <= target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
    
}
void merge_insert(std::vector<int>& arr)
{
    int static f = 0;
    f++;
    int n = arr.size();
    if( n < 2)
        return ;
    

    

     std::vector<int> m,p;
    create_pairs(arr,m,p); 
    std::vector<std::pair<int,int> > a(n/2);   
    for (int i = 0;i < n/2;i++)
    {
        a[i].first =   m[i];
        a[i].second=  p[i];  
    }
        std::cout<<f <<" main : ";
    for (int i = 0;i < m.size();i++)
    {
        std::cout << m[i] << " ";
    }
        std::cout<< "\n";
    std::cout<<f <<" pend : "; 
    for (int i = 0;i < p.size();i++)
    {
        std::cout << p[i] << " ";
    }
     std::cout<< "\n\n";

    merge_insert(m);
    std::cout<< "\n";
      std::cout<<f <<" pend : ";
    for (int i = 0;i < p.size();i++)
    {
        std::cout << p[i] << " ";
    }
     std::cout<< "\n\n";
    std::vector<int> rp(p.size());
    for (int i = 0;i < m.size();i++)
    {
       std::vector<int>::iterator it = std::find(m.begin(),m.end(), a[i].first);
       int j = std::distance(m.begin(),it);
       rp[j] = a[i].second;  
    }
      std::cout<<f << "\nrpend : ";
    for (int i = 0;i < rp.size();i++)
    {
        std::cout << rp[i] << " ";
    }
     std::cout<< "\n\n";
    p = rp;
    std::vector<bool> v(p.size(),false);
    if (!p.empty())
    {
        m.insert(m.begin(),p[0]);
        v[0] = true; 
        
    }
    
    int k = 2;
    
    std::cout<<f << " main : ";
    for (int i = 0;i < m.size();i++)
    {
        std::cout << m[i] << " ";
    }
    std::cout<< "\n";
      std::cout<<f <<" pend : ";
    for (int i = 0;i < p.size();i++)
    {
        std::cout << p[i] << " ";
    }
     std::cout<< "\n\n";
    // int k = 2;

}

int main()
{
    std::vector<int> a = {4,3,5,22,33,55,2,27,79,6,0};
    merge_insert(a);

}