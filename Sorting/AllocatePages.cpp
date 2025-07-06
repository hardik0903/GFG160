#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool feasible(const vector<int>& A, int k, int maxPages) {
        int students = 1, curr = 0;
        for (int p : A) {
            if (curr + p > maxPages) {
                students++;
                curr = p;
                if (students > k) return false;
            } else {
                curr += p;
            }
        }
        return true;
    }

    int findPages(vector<int> &A, int k) {
        int n = A.size();
        if (k > n) return -1;
        int lo = *max_element(A.begin(), A.end());
        int hi = accumulate(A.begin(), A.end(), 0);
        int ans = hi;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (feasible(A, k, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << "Input: arr = {12, 34, 67, 90}, k = 2" << endl;
    cout << "Output: " << sol.findPages(arr, k) << endl;
    return 0;
}