#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int key) {
        int lo = 0, hi = arr.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == key)
                return mid;
            
            if (arr[lo] <= arr[mid]) {
                if (arr[lo] <= key && key < arr[mid])
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            else {
                if (arr[mid] < key && key <= arr[hi])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution ob;

    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int key1_found = 0;
    int key1_not_found = 3;

    cout << "Example 1: Array = {4, 5, 6, 7, 0, 1, 2}" << endl;
    int result1_found = ob.search(arr1, key1_found);
    if (result1_found != -1) {
        cout << "Key " << key1_found << " found at index: " << result1_found << endl;
    } else {
        cout << "Key " << key1_found << " not found." << endl;
    }

    int result1_not_found = ob.search(arr1, key1_not_found);
    if (result1_not_found != -1) {
        cout << "Key " << key1_not_found << " found at index: " << result1_not_found << endl;
    } else {
        cout << "Key " << key1_not_found << " not found." << endl;
    }

    cout << "---------------------------------------" << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5};
    int key2_found = 3;
    int key2_not_found = 10;

    cout << "Example 2: Array = {1, 2, 3, 4, 5}" << endl;
    int result2_found = ob.search(arr2, key2_found);
    if (result2_found != -1) {
        cout << "Key " << key2_found << " found at index: " << result2_found << endl;
    } else {
        cout << "Key " << key2_found << " not found." << endl;
    }

    int result2_not_found = ob.search(arr2, key2_not_found);
    if (result2_not_found != -1) {
        cout << "Key " << key2_not_found << " not found." << endl;
    } else {
        cout << "Key " << key2_not_found << " not found." << endl;
    }

    cout << "---------------------------------------" << endl;

    vector<int> arr3 = {3, 1};
    int key3_found = 1;
    int key3_not_found = 5;

    cout << "Example 3: Array = {3, 1}" << endl;
    int result3_found = ob.search(arr3, key3_found);
    if (result3_found != -1) {
        cout << "Key " << key3_found << " found at index: " << result3_found << endl;
    } else {
        cout << "Key " << key3_found << " not found." << endl;
    }

    int result3_not_found = ob.search(arr3, key3_not_found);
    if (result3_not_found != -1) {
        cout << "Key " << key3_not_found << " not found." << endl;
    } else {
        cout << "Key " << key3_not_found << " not found." << endl;
    }

    return 0;
}