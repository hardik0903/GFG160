#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // Required for std::greater

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int h = 0;
        for (int i = 0; i < (int)citations.size(); ++i) {
            if (citations[i] >= i + 1) {
                h = i + 1;
            } else {
                break;
            }
        }
        return h;
    }
};

int main() {
    Solution sol;
    vector<int> citations = {3,0,6,1,5};
    int result_hIndex = sol.hIndex(citations);

    cout << "Citations: [";
    for (size_t i = 0; i < citations.size(); ++i) {
        cout << citations[i] << (i == citations.size() - 1 ? "" : ",");
    }
    cout << "]" << endl;
    cout << "H-Index: " << result_hIndex << endl;

    return 0;
}