#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> spirallyTraverse(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int left = 0;
        int right = m - 1;
        int bottom = n - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> matrix1 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Solution sol;

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix1) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }

    vector<int> result1 = sol.spirallyTraverse(matrix1);
    cout << "Spiral Traversal: ";
    for (int val : result1) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
