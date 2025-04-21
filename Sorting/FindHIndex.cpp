// Method 1: Sort‑and‑Scan (O(n log n) time, O(1) extra space)
#include <bits/stdc++.h>
using namespace std;

int hIndex_sort(vector<int>& citations) {
    sort(citations.begin(), citations.end(), greater<int>());
    int h = 0;
    for (int i = 0; i < (int)citations.size(); ++i) {
        if (citations[i] >= i + 1)
            h = i + 1;
        else
            break;
    }
    return h;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;                       // number of papers
    vector<int> citations(n);
    for (int i = 0; i < n; i++)
        cin >> citations[i];

    cout << hIndex_sort(citations) << "\n";
    return 0;
}
