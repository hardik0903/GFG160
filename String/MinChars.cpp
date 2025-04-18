#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCharsToMakePalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    string combined = s + "#" + rev;
    int n = combined.length();
    
    vector<int> lps(n, 0);
    int len = 0;

    // Compute the LPS array
    for (int i = 1; i < n; ++i) {
        while (len > 0 && combined[i] != combined[len]) {
            len = lps[len - 1];
        }
        if (combined[i] == combined[len]) {
            len++;
            lps[i] = len;
        }
    }

    return s.length() - lps[n - 1];
}

int main() {
    string s1 = "abc";
    string s2 = "aacecaaaa";

    cout << "Input: " << s1 << "\nOutput: " << minCharsToMakePalindrome(s1) << endl;
    cout << "Input: " << s2 << "\nOutput: " << minCharsToMakePalindrome(s2) << endl;

    return 0;
}
