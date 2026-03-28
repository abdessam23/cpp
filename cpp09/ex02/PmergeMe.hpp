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


class PmergeMe
{
private:
    std::vector<int> arr;
    std::deque<int> deq;
    static int count; 
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    struct  sorthelper
    {
        std::vector<bool> b_inserted;
        std::vector<int> a_positions; 
    };

    void valid_input(char** arg); 
    void fill_string(char** arg,std::vector<std::string> &str);
    size_t jacobsthal(size_t n);

    void merge_insert(std::vector<int>& a);
    void insert_element(sorthelper& v,std::vector<int>& result,std::vector<int>& b,size_t i);   
    int binarySearch(std::vector<int> &a, int target, int start, int end);
    void create_pairs(std::vector<int>& ar, std::vector<int>& a,std::vector<int>& b);

    void merge_insert(std::deque<int>& a);
    int binarySearch(std::deque<int> &a, int target, int start, int end);
    void insert_element(sorthelper& v,std::deque<int>& result,std::deque<int>& b,size_t i); 
    void create_pairs(std::deque<int>& ar, std::deque<int>& a,std::deque<int>& b);
public:
    
    PmergeMe(char** arg);
    void sort();
    ~PmergeMe();
};

