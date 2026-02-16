

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath> 
#include <ctime>
#include <deque>
#include <exception>
#include <utility>
static int count = 0;

int binarySearch(std::vector<int> &a, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        count++;
        if (a[mid] <= target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
    
}

void create_pairs(std::vector<int>& d, 
                           std::vector<int>& a,
                           std::vector<int>& b)
{
    int n = d.size();
    
   
    for (int i = 0; i < n - 1; i += 2)
    {
        count++;
        if (d[i] > d[i + 1])
        {
            a.push_back(d[i]);      
            b.push_back(d[i + 1]);  
        }
        else
        {
            a.push_back(d[i + 1]); 
            b.push_back(d[i]);     
        }
    }
    
   
    if (n % 2 == 1)
    {
        b.push_back(d[n - 1]);
    }
}
size_t jacobsthal(size_t n)
{
    if (n == 0) return 0;
    size_t power =  (1<< (n + 1));
    return (n%2 == 0)? (power + 1)/ 3: (power - 1)/3;
}
void merge_insert(std::vector<int>& d)
{
    int n = d.size();
    
    if (n < 2)
        return;
        
    if (n == 2)
    {
        count++;
        if (d[0] > d[1])
            std::swap(d[0], d[1]);
        return;
    }
    
    std::vector<int> a, b;
    create_pairs(d, a, b);
    

    std::vector<std::pair<int, int> > mapping;
    for (int i = 0; i < (int)a.size(); i++)
    {
        mapping.push_back(std::make_pair(a[i], b[i]));
    }
    
    int straggler = -1;
    bool has_straggler = (b.size() > a.size());
    if (has_straggler)
    {
        straggler = b[b.size() - 1];
    }
     
    merge_insert(a);
   
    std::vector<int> new_b;
    for (int i = 0; i < (int)a.size(); i++)
    {
        for (int j = 0; j < (int)mapping.size(); j++)
        {
            if (mapping[j].first == a[i])
            {
                new_b.push_back(mapping[j].second);
                break;
            }
        }
    }
    
    if (has_straggler)
    {
        new_b.push_back(straggler);
    }
    
    b = new_b;
   
 
    std::vector<int> result;
    std::vector<bool> b_inserted(b.size(), false);

    if (!b.empty())
    {
        result.push_back(b[0]);
        b_inserted[0] = true;
    }
    

    for (int i = 0; i < (int)a.size(); i++)
    {
        result.push_back(a[i]);
    }
    

    std::vector<int> a_positions(a.size());
    for (int i = 0; i < (int)a.size(); i++)
    {
        a_positions[i] = i + 1;
    }
    
    int k = 2;
    int ceil_n_half = (n + 1) / 2;
    
    while ((int)jacobsthal(k - 1) < ceil_n_half)
    {
        int tk = jacobsthal(k);
        int tk_prev = jacobsthal(k - 1);
        int m = std::min(tk, ceil_n_half);
        
        for (int i = m - 1; i >= tk_prev; i--)
        {
            if (i < (int)b.size() && !b_inserted[i])
            {
       
                int search_start = 0;
                int search_end;
                
                if (i < (int)a_positions.size())
                {
                   
                    search_end = a_positions[i] - 1;
                }
                else
                {
                    
                    search_end = result.size() - 1;
                }
                
                
                if (search_end < search_start)
                {
                    result.insert(result.begin(), b[i]);
                    b_inserted[i] = true;
                    
                    for (int j = 0; j < (int)a_positions.size(); j++)
                        a_positions[j]++;
                }
                else
                {
                    int pos = binarySearch(result, b[i], search_start, search_end);
                    result.insert(result.begin() + pos, b[i]);
                    b_inserted[i] = true;
                    
                    for (int j = 0; j < (int)a_positions.size(); j++)
                    {
                        if (a_positions[j] >= pos)
                            a_positions[j]++;
                    }
                }
            }
        }
        
        k++;
    }
    

    for (int i = 0; i < (int)b.size(); i++)
    {
        if (!b_inserted[i])
        {
            int search_start = 0;
            int search_end;
            
            if (i < (int)a_positions.size())
            {
                search_end = a_positions[i] - 1;
            }
            else
            {
                search_end = result.size() - 1;
            }
            
            if (search_end < search_start)
            {
                result.insert(result.begin(), b[i]);
                
                for (int j = 0; j < (int)a_positions.size(); j++)
                    a_positions[j]++;
            }
            else
            {
                int pos = binarySearch(result, b[i], search_start, search_end);
                result.insert(result.begin() + pos, b[i]);
                
                for (int j = 0; j < (int)a_positions.size(); j++)
                {
                    if (a_positions[j] >= pos)
                        a_positions[j]++;
                }
            }
        }
    }
    
    d = result;
}



void fill_string(char** arg,std::vector<std::string> &str)
{
    int i = 1;
    std::string s;
    std::string tmp;
    while (arg[i])
    {
       s += arg[i] ; 
       s += " ";
       i++;
    }
    std::stringstream ss(s); 
    while(ss >>tmp)
    {
        str.push_back(tmp);
    }
}

void valid_input(char** arg,std::vector<int>&  arr,std::deque<int>& deq)
{
    std::vector<std::string>  str;
    fill_string(arg,str);
    char* end = NULL;
    for (size_t i = 0; i < str.size(); i++)
    {
        double n = std::strtod(str[i].c_str(), &end);
        if ((n < 0 || n > INT_MAX) || *end != '\0')
        {
            throw std::runtime_error("Error : only positive integers.");
        }
        else
        {
            arr.push_back(n);
            deq.push_back(n);
            
        }
    }
}


int main(int ac, char** arg)
{
    std::vector<int>  arr;
    std::deque<int>  deq;

    valid_input(arg,arr,deq);
    std::vector<int> indices(arr.size());
    for (size_t i = 0; i < arr.size(); i++)
        indices[i] = i;
    std::cout << "The array before sorting : ";
    for (size_t i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    merge_insert(arr);
    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout << count <<std::endl; 
    std::cout << "size : " << arr.size() <<std::endl; 
    bool sorted = true;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i-1])
        {
            sorted = false;
            break;
        }
    }
    std::cout << "Correctly sorted: " << (sorted ? "YES" : "NO") << std::endl;
}