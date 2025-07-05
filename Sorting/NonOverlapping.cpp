#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minRemoval(vector<vector<int>> &intervals) {
        if (intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });

        int cnt = 0;
        int prev_end = intervals[0][1];

        for (int i = 1; i < intervals.size(); ++i) {
            int s = intervals[i][0], e = intervals[i][1];
            if (s >= prev_end) {
                prev_end = e;
            } else {
                ++cnt;
            }
        }
        return cnt;
    }
};

int main() {
    Solution obj;

    // Example 1
    vector<vector<int>> intervals1 = {{1,2},{2,3},{3,4},{1,3}};
    cout << "Intervals: ";
    for (const auto& interval : intervals1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    cout << "Minimum removals to make non-overlapping: " << obj.minRemoval(intervals1) << endl;

    cout << "---------------------------------------" << endl;

    // Example 2
    vector<vector<int>> intervals2 = {{1,3},{2,4},{5,7},{6,8}};
    cout << "Intervals: ";
    for (const auto& interval : intervals2) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    cout << "Minimum removals to make non-overlapping: " << obj.minRemoval(intervals2) << endl;

    return 0;
}