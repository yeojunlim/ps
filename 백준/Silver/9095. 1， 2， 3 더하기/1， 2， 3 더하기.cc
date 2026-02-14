#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    short t, n;
    vector<short> dp = {0, 1, 2, 4};
    for (short i = 1; i < 9; i++) {
        dp.push_back(dp[i] + dp[i + 1] + dp[i + 2]);
    }

    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}