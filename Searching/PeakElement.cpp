#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // For INT_MIN

using namespace std;

class Solution {
public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int left = (mid > 0) ? arr[mid - 1] : INT_MIN;
            int right = (mid < n - 1) ? arr[mid + 1] : INT_MIN;

            if (arr[mid] > left && arr[mid] > right) {
                return mid;
            } else if (arr[mid] < right) {
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

    vector<int> arr1 = {1, 2, 3, 4, 5}; // Peak at 4 (index 3) or 5 (index 4) - depends on exact condition
    cout << "Example 1: Array = {1, 2, 3, 4, 5}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr1) << endl; // Expected: 4 (index of 5)

    cout << "---------------------------------------" << endl;

    vector<int> arr2 = {1, 2, 1, 3, 5, 6, 4}; // Peak at 1 (index 0), 2 (index 1), 3 (index 3), 5 (index 4), 6 (index 5)
    // The algorithm might return any one of these.
    cout << "Example 2: Array = {1, 2, 1, 3, 5, 6, 4}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr2) << endl; // Expected: 1 or 5

    cout << "---------------------------------------" << endl;

    vector<int> arr3 = {10, 20, 15, 2, 23, 90, 67}; // Peak at 20 (index 1), 90 (index 5)
    cout << "Example 3: Array = {10, 20, 15, 2, 23, 90, 67}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr3) << endl; // Expected: 1 or 5

    cout << "---------------------------------------" << endl;

    vector<int> arr4 = {5}; // Peak at 5 (index 0)
    cout << "Example 4: Array = {5}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr4) << endl; // Expected: 0

    cout << "---------------------------------------" << endl;

    vector<int> arr5 = {1, 3, 20, 4, 1, 0}; // Peak at 20 (index 2)
    cout << "Example 5: Array = {1, 3, 20, 4, 1, 0}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr5) << endl; // Expected: 2

    return 0;
}