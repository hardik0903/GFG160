#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            switch (arr[mid]) {
                case 0:
                    swap(arr[mid], arr[low]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[mid], arr[high]);
                    high--;
                    break;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 2, 1, 2, 0, 1};

    cout << "Original Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    sol.sort012(arr);

    cout << "Sorted Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr2 = {2, 1, 0, 1, 2, 0};

    cout << "Original Array: ";
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;

    sol.sort012(arr2);

    cout << "Sorted Array: ";
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}