#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> computeLPS(const string& pattern) {
        int n = pattern.size();
        vector<int> lps(n, 0);
        int len = 0, i = 1;

        while (i < n) {
            if (pattern[i] == pattern[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }
        return lps;
    }

    bool kmpSearch(const string& text, const string& pattern) {
        int n = text.size(), m = pattern.size();
        vector<int> lps = computeLPS(pattern);
        int i = 0, j = 0;

        while (i < n) {
            if (text[i] == pattern[j]) {
                i++; j++;
            }

            if (j == m) {
                return true;
            } else if (i < n && text[i] != pattern[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return false;
    }

    bool isRotation(string s1, string s2) {
        if (s1.length() != s2.length()) return false;
        string doubled = s1 + s1;
        return kmpSearch(doubled, s2);
    }
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    Solution sol;
    cout << (sol.isRotation(s1, s2) ? "true" : "false") << endl;
    return 0;
}
