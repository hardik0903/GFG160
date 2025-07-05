#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        vector<vector<int>> result;
        int i = 0, n = intervals.size();

        while (i < n && intervals[i][1] < newInterval[0]) {
            result.push_back(intervals[i]);
            i++;
        }

        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        result.push_back(newInterval);

        while (i < n) {
            result.push_back(intervals[i]);
            i++;
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> intervals1 = {{1,3},{6,9}};
    vector<int> newInterval1 = {2,5};
    vector<vector<int>> mergedIntervals1 = sol.insertInterval(intervals1, newInterval1);

    cout << "Intervals: ";
    for (const auto& interval : intervals1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << ", New Interval: [" << newInterval1[0] << "," << newInterval1[1] << "]" << endl;
    cout << "Merged Intervals: ";
    for (const auto& interval : mergedIntervals1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    cout << "---------------------------------------" << endl;

    vector<vector<int>> intervals2 = {{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int> newInterval2 = {4,8};
    vector<vector<int>> mergedIntervals2 = sol.insertInterval(intervals2, newInterval2);

    cout << "Intervals: ";
    for (const auto& interval : intervals2) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << ", New Interval: [" << newInterval2[0] << "," << newInterval2[1] << "]" << endl;
    cout << "Merged Intervals: ";
    for (const auto& interval : mergedIntervals2) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}