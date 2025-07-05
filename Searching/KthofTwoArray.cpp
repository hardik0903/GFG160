#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    vector<int> arr1 = {1, 2, 3, 4, 5};
    cout << "Example 1: Array = {1, 2, 3, 4, 5}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr1) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr2 = {1, 2, 1, 3, 5, 6, 4};
    cout << "Example 2: Array = {1, 2, 1, 3, 5, 6, 4}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr2) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr3 = {10, 20, 15, 2, 23, 90, 67};
    cout << "Example 3: Array = {10, 20, 15, 2, 23, 90, 67}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr3) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr4 = {5};
    cout << "Example 4: Array = {5}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr4) << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr5 = {1, 3, 20, 4, 1, 0};
    cout << "Example 5: Array = {1, 3, 20, 4, 1, 0}" << endl;
    cout << "Peak element index: " << ob.peakElement(arr5) << endl;

    return 0;
}