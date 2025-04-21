#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> computeLPS(string& pat) {
        int m = pat.size();
        vector<int> lps(m, 0);
        int len = 0;
        int i = 1;

        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    vector<int> search(string &pat, string& txt) {
        int n = txt.size();
        int m = pat.size();
        vector<int> matches;
        if (m == 0 || n < m) return matches;

        vector<int> lps = computeLPS(pat);
        int i = 0, j = 0;

        while (i < n) {
            if (txt[i] == pat[j]) {
                i++; j++;
                if (j == m) {
                    matches.push_back(i - m);
                    j = lps[j - 1];
                }
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return matches;
    }
};

int main() {
    Solution ob;
    string s = "aacecaaaa";
    string rev = s;
    reverse(rev.begin(), rev.end());
    string combined = s + "#" + rev;

    vector<int> lps = ob.computeLPS(combined);
    int minChars = s.length() - lps.back();

    cout << "Input: " << s << endl;
    cout << "Minimum characters to add at front: " << minChars << endl;

    return 0;
}
