#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        auto low_t = lower_bound(arr.begin(), arr.end(), target);
        auto upp_t = upper_bound(arr.begin(), arr.end(), target);
        return upp_t - low_t;
    }
};

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4, 4, 4, 5, 6};
    int target1 = 4;
    Solution sol1;
    int ans1 = sol1.countFreq(arr1, target1);
    cout << "Example 1:" << endl;
    cout << "Array: [1, 2, 2, 3, 4, 4, 4, 5, 6], Target: " << target1 << endl;
    cout << "Frequency: " << ans1 << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr2 = {10, 20, 30, 40, 50};
    int target2 = 25;
    Solution sol2;
    int ans2 = sol2.countFreq(arr2, target2);
    cout << "Example 2:" << endl;
    cout << "Array: [10, 20, 30, 40, 50], Target: " << target2 << endl;
    cout << "Frequency: " << ans2 << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr3 = {7, 7, 7, 8, 9, 10};
    int target3 = 7;
    Solution sol3;
    int ans3 = sol3.countFreq(arr3, target3);
    cout << "Example 3:" << endl;
    cout << "Array: [7, 7, 7, 8, 9, 10], Target: " << target3 << endl;
    cout << "Frequency: " << ans3 << endl;

    cout << "---------------------------------------" << endl;

    vector<int> arr4 = {1, 2, 3, 10, 10, 10, 10};
    int target4 = 10;
    Solution sol4;
    int ans4 = sol4.countFreq(arr4, target4);
    cout << "Example 4:" << endl;
    cout << "Array: [1, 2, 3, 10, 10, 10, 10], Target: " << target4 << endl;
    cout << "Frequency: " << ans4 << endl;

    return 0;
}