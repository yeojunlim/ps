#include <bits/stdc++.h>
using namespace std;

int ott(int n) {
    static vector<int> dp = {0, 1, 2, 4, -1, -1, -1, -1, -1, -1, -1, -1};

    if (dp[n] != -1) {
        return dp[n];
    }

    return dp[n] = ott(n - 3) + ott(n - 2) + ott(n - 1);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;
        cout << ott(n) << '\n';
    }

    return 0;
}