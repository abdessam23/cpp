

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int  right = 0;
        int left = 0;
        int res = 0;
       while(right < arr.size())
       {
           res  += arr[right];
           while (res > target && left <= right)
           {
                res -= arr[left];
                left++;
           }
           if (res == target)
           {
             return {left+1,right+1};
           }
           right++;
       }
       return {-1};
    }
};
int main()
{
    Solution a;
    int target = 9;
    vector<int> arr = {1,3,4,2,6,7,8,5,9,0};
    vector <int> st = a.subarraySum(arr, target);

    for (int i = 0; i < st.size(); i++)
    {
        cout << st[i] << " " ;
    }
    
}

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> subarraySum(vector<int> &arr, int target) {
//         int n = arr.size();
//         int left = 0;
//         int right = 0;
//         int current_sum = 0;

//         while (right < n) {
//             current_sum += arr[right];  // expand window

//             // shrink from left if sum too big
//             while (current_sum > target && left <= right) {
//                 current_sum -= arr[left];
//                 left++;
//             }

//             // check if found
//             if (current_sum == target) {
//                 return {left + 1, right + 1}; // 1-based indices
//             }

//             right++;
//         }

//         return {-1};
//     }
// };

// int main() {
//     Solution s;
//     vector<int> arr = {1, 2, 3, 7, 5};
//     int target = 12;
//     vector<int> result = s.subarraySum(arr, target);

//     for (int i = 0; i < result.size(); i++)
//         cout << result[i] << " ";
//     cout << endl;
// }
