#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            if (arr[low] <= arr[high]) {
                return arr[low];
            }

            int mid = low + (high - low) / 2;
            int n = arr.size();
            
            int next = (mid + 1) % n;
            int prev = (mid - 1 + n) % n;

            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
                return arr[mid];
            }
            
            if (arr[mid] >= arr[low]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution ob;

    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Example 1: Array = {4, 5, 6, 7, 0, 1, 2}" << endl;
    cout << "Minimum element: " << ob.findMin(arr1) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5};
    cout << "Example 2: Array = {1, 2, 3, 4, 5}" << endl;
    cout << "Minimum element: " << ob.findMin(arr2) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr3 = {3, 4, 5, 1, 2};
    cout << "Example 3: Array = {3, 4, 5, 1, 2}" << endl;
    cout << "Minimum element: " << ob.findMin(arr3) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr4 = {2, 1};
    cout << "Example 4: Array = {2, 1}" << endl;
    cout << "Minimum element: " << ob.findMin(arr4) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr5 = {1, 1, 1, 0, 1};
    cout << "Example 5: Array = {1, 1, 1, 0, 1}" << endl;
    cout << "Minimum element: " << ob.findMin(arr5) << endl;

    return 0;
}