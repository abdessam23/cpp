#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
}
PmergeMe::PmergeMe(char** arg){
    valid_input(arg);
}

PmergeMe::PmergeMe(const PmergeMe& other):arr(other.arr),deq(other.deq)
{

}
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        arr = other.arr;
        deq = other.deq;
    }
    return *this;
}


void PmergeMe::fill_string(char** arg,std::vector<std::string> &str)
{
    int i = 1;
    std::string s;
    std::string tmp;
    while (arg[i])
    {
       std::string s(arg[i]);  
        std::string tmp;
       std::stringstream ss(s); 
        while(ss >>tmp)
        {
        str.push_back(tmp);
        }
       i++;
    }
    
}

void PmergeMe::valid_input(char** arg)
{
    std::vector<std::string>  str;
    fill_string(arg,str);
    if (str.empty())
        throw std::runtime_error("Error : no input");
    char* end = NULL;

    for (size_t i = 0; i < str.size(); i++)
    {
        long n = std::strtol(str[i].c_str(), &end,10); 
        if (*end != '\0' || n <= 0 || n > INT_MAX)
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
PmergeMe::~PmergeMe()
{
}

size_t PmergeMe::jacobsthal(size_t n)
{
    if (n == 0) return 0;
     if (n == 1) return 1;
    size_t power =  (1ULL << n);
    return (n%2 == 0)? (power - 1)/ 3: (power + 1)/3;
}

void PmergeMe::sort()
{
    double t1 = 0,t2 = 0;
    if (arr.empty())
       throw std::runtime_error("there is no element\n");
  
    std::cout << "The array before sorting : ";
    for (size_t i = 0; i < deq.size(); i++)
        std::cout << deq[i] << " ";
     
    clock_t time_a = std::clock();
    merge_insert(arr);
    time_a = std::clock() - time_a;
    t1 = ((double)(time_a) / CLOCKS_PER_SEC * 1000000);

    clock_t time_d = std::clock();
    merge_insert(deq);
    time_d = std::clock() - time_d;
    t2 = ((double)(time_d) / CLOCKS_PER_SEC * 1000000);
  
    std::cout << "\nThe array after sorting : ";
    for (size_t i = 0; i < arr.size(); i++)
        std::cout <<arr[i] << " ";

    std::cout << "\n\nTime to process a range of " 
    << arr.size() << " element with std::vector<int>  is : "<< std::fixed <<t1 <<  " us";
    
    std::cout << "\nTime to process a range of " 
    << deq.size() << " element with std::deque<int>  is : "<< std::fixed <<t2 <<  " us" << std::endl;   
}

void PmergeMe::create_pairs(std::deque<int>& arr, std::deque<int>& a,std::deque<int>& b) 
{
    for(size_t i = 0; i + 1 <arr.size();i+=2)
    {
        if (arr[i] < arr[i + 1])
        {
            a.push_back(arr[i + 1]);
            b.push_back(arr[i]);
        }
        else
        {
            a.push_back(arr[i]);
            b.push_back(arr[i + 1]);
        }
    }
    if(arr.size()% 2 != 0)
        b.push_back(arr[arr.size() - 1]);
}

void PmergeMe::merge_insert(std::deque<int>& d)
{
    int n = (int)d.size();
    
    if (n < 2)
        return;   
    std::deque<int> a, b;
    create_pairs(d, a, b);

    std::deque<std::pair<int, int> > mapping;
    for (size_t i = 0; i < a.size(); i++)
        mapping.push_back(std::make_pair(a[i], b[i]));

    
    int straggler = -1;
    bool has_straggler = (b.size() > a.size());
    if (has_straggler)
        straggler = b[b.size() - 1];

    merge_insert(a);
   
    std::deque<int> new_b;
    std::deque<bool> used(mapping.size(), false);

for (size_t i = 0; i < a.size(); i++)
{
    for (size_t j = 0; j < mapping.size(); j++)
    {
        if (!used[j] && mapping[j].first == a[i])
        {
            new_b.push_back(mapping[j].second);
            used[j] = true;
            break;
        }
    }
}

    if (has_straggler)
        new_b.push_back(straggler);
    b = new_b;
    sorthelper v; 
    std::deque<int> result;
    v.b_inserted.assign(b.size(), false);
    if (!b.empty())
    {
        result.push_back(b[0]);
        v.b_inserted[0] = true; 
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
        v.a_positions.push_back(i + 1); 
    }

    int k = 3;
    size_t ceil_n_half = (n + 1) / 2;
    
    while (jacobsthal(k - 1) < ceil_n_half)
    {
        size_t tk = jacobsthal(k);
        size_t tk_prev = jacobsthal(k - 1);
        size_t m = std::min(tk, ceil_n_half);
        
        for (size_t i = m - 1; i >= tk_prev; i--)
        {
            if (i < b.size() && !v.b_inserted[i])
              insert_element(v,result,b,i);
        }
        k++;
    }
    

    for (size_t i = 0; i < b.size(); i++)
    {
        if (!v.b_inserted[i]) 
            insert_element(v,result,b,i);
    }

    d = result; 
}


void PmergeMe::insert_element(sorthelper& v,std::deque<int>& result,std::deque<int>& b,size_t i) 
{ 
    int search_end;
            
    if (i < v.a_positions.size()) 
        search_end = v.a_positions[i] - 1;
    else 
        search_end = result.size() - 1; 
   
    std::deque<int>::iterator it = std::lower_bound(result.begin(),result.begin() +  search_end + 1,b[i]);
    int idx = it - result.begin();
    result.insert(it, b[i]); 
    
    v.b_inserted[i] = true;
    for (size_t j = 0; j < v.a_positions.size(); j++)
    {
        if (v.a_positions[j] >= idx)
            v.a_positions[j]++;  
    }

}

void PmergeMe::create_pairs(std::vector<int>& arr, std::vector<int>& a,std::vector<int>& b)
{
    for(size_t i = 0; i + 1 <arr.size();i+=2)
    {
        if (arr[i] < arr[i + 1])
        {
            a.push_back(arr[i + 1]);
            b.push_back(arr[i]);
        }
        else
        {
            a.push_back(arr[i]);
            b.push_back(arr[i + 1]);
        }
    }
    if(arr.size()% 2 != 0)
       b.push_back(arr[arr.size() - 1]);
}

void PmergeMe::merge_insert(std::vector<int>& d)
{
    int n = (int)d.size();
    
    if (n < 2)
        return;   
    std::vector<int> a, b;
    create_pairs(d, a, b);

    std::vector<std::pair<int, int> > mapping;
    for (size_t i = 0; i < a.size(); i++)
        mapping.push_back(std::make_pair(a[i], b[i]));

    
    int straggler = -1;
    bool has_straggler = (b.size() > a.size());
    if (has_straggler)
        straggler = b[b.size() - 1];

    merge_insert(a);
   
    std::vector<int> new_b;
    std::vector<bool> used(mapping.size(), false);

    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < mapping.size(); j++)
        {
            if (!used[j] && mapping[j].first == a[i])
            {
                new_b.push_back(mapping[j].second);
                used[j] = true;
                break;
            }
        }
    }

    if (has_straggler)
        new_b.push_back(straggler);
    b = new_b;
    sorthelper v; 
    std::vector<int> result;
    v.b_inserted.assign(b.size(), false);
    if (!b.empty())
    {
        result.push_back(b[0]);
        v.b_inserted[0] = true; 
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
        v.a_positions.push_back(i + 1); 
    }

    int k = 3;
    size_t ceil_n_half = (n + 1) / 2;
    
    while (jacobsthal(k - 1) < ceil_n_half)
    {
        size_t tk = jacobsthal(k);
        size_t tk_prev = jacobsthal(k - 1);
        size_t m = std::min(tk, ceil_n_half);
        
        for (size_t i = m - 1; i >= tk_prev; i--)
        {
            if (i < b.size() && !v.b_inserted[i])
              insert_element(v,result,b,i);
        }
        k++;
    }
    

    for (size_t i = 0; i < b.size(); i++)
    {
        if (!v.b_inserted[i]) 
            insert_element(v,result,b,i);
    }

    d = result; 
}


void PmergeMe::insert_element(sorthelper& v,std::vector<int>& result,std::vector<int>& b,size_t i)
{ 
    int search_end;
            
    if (i < v.a_positions.size()) 
        search_end = v.a_positions[i] - 1;
    else
        search_end = result.size() - 1;
    std::vector<int>::iterator it = std::lower_bound(result.begin(),result.begin() +  search_end + 1,b[i]);
    int idx = it - result.begin();

    result.insert(it, b[i]);

    v.b_inserted[i] = true;

    for (size_t j = 0; j < v.a_positions.size(); j++)
    {
        if (v.a_positions[j] >= idx)
            v.a_positions[j]++;  
    }

}