
#include <iostream>
#include <vector>
#include <algorithm>




#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 8,9, 5};

    int* ptr1 = &arr[1];

    // Adding 4 to ptr1 and stored in ptr2
    int* ptr2 = &arr[5];

    // Subtracting ptr2 from ptr1
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr2 - ptr1 << endl;

    return 0;
}