#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, K, I, T;
    vector<int> dp;

    cin >> N >> K;
    dp.assign(N + 1, 0);
    while (K--) {
        cin >> I >> T;
        for (int j = N; j >= T; j--) {
            dp[j] = max(dp[j], I + dp[j - T]);
        }
    }

    cout << dp.back();

    return 0;
}