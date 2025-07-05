#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool cowsPlace(vector<int>& stalls, int dist, int k) {
        int n = stalls.size();
        int cowsCnt = 1;
        int last = stalls[0];

        for (int i = 1; i < n; i++) {
            if (stalls[i] - last >= dist) {
                cowsCnt++;
                last = stalls[i];
            }
        }
        return (cowsCnt >= k);
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int n = stalls.size();
        int low = 1;
        int high = stalls[n - 1] - stalls[0];

        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (cowsPlace(stalls, mid, k)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> stalls1 = {1, 2, 4, 8, 9};
    int k1 = 3;
    Solution sol1;
    int result1 = sol1.aggressiveCows(stalls1, k1);
    cout << "Example 1: Stalls = [1, 2, 4, 8, 9], K = 3" << endl;
    cout << "Maximum possible minimum distance: " << result1 << endl;

    cout << "---------------------------------------" << endl;

    vector<int> stalls2 = {0, 3, 4, 7, 10, 9};
    int k2 = 4;
    Solution sol2;
    int result2 = sol2.aggressiveCows(stalls2, k2);
    cout << "Example 2: Stalls = [0, 3, 4, 7, 10, 9], K = 4" << endl;
    cout << "Sorted stalls: [0, 3, 4, 7, 9, 10]" << endl;
    cout << "Maximum possible minimum distance: " << result2 << endl;

    cout << "---------------------------------------" << endl;

    vector<int> stalls3 = {1, 10};
    int k3 = 2;
    Solution sol3;
    int result3 = sol3.aggressiveCows(stalls3, k3);
    cout << "Example 3: Stalls = [1, 10], K = 2" << endl;
    cout << "Maximum possible minimum distance: " << result3 << endl;

    return 0;
}