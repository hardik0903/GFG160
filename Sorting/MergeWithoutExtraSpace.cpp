#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int left = a.size() - 1;
        int right = 0;

        while (left >= 0 && right < b.size()) {
            if (a[left] > b[right]) {
                swap(a[left], b[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};

int main() {
    Solution ob;

    // Example 1
    vector<int> a1 = {1, 3, 5, 7};
    vector<int> b1 = {0, 2, 6, 8, 9};

    cout << "Original Array A: ";
    for (int x : a1) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Original Array B: ";
    for (int x : b1) {
        cout << x << " ";
    }
    cout << endl;

    ob.mergeArrays(a1, b1);

    cout << "Merged Array A: ";
    for (int x : a1) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Merged Array B: ";
    for (int x : b1) {
        cout << x << " ";
    }
    cout << endl;

    cout << "---------------------------------------" << endl;

    // Example 2
    vector<int> a2 = {10, 12};
    vector<int> b2 = {5, 18, 20};

    cout << "Original Array A: ";
    for (int x : a2) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Original Array B: ";
    for (int x : b2) {
        cout << x << " ";
    }
    cout << endl;

    ob.mergeArrays(a2, b2);

    cout << "Merged Array A: ";
    for (int x : a2) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Merged Array B: ";
    for (int x : b2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}