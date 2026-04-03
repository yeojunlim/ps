#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, T, K, S;
    vector<int> dp;

    cin >> N >> T;
    dp.assign(T + 1, 0);

    for (int i = 0; i < N; i++) {
        cin >> K >> S;
        for (int j = T; j >= K; j--) {
            dp[j] = max(dp[j], S + dp[j - K]);
        }
    }

    cout << dp.back();

    return 0;
}