#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = int(1e9 + 7);
constexpr int MAX = 3335;

void init(int* dp) {
    for (int i = 1; i <= MAX / 3 * 3; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] = (dp[i] + 1ULL * dp[j] * (i - j) * 2) % MOD;
        }
        dp[i] = (dp[i] + dp[i - 1]) % MOD;
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int T, N;
    int dp[MAX] = {1};
    init(dp);

    cin >> T;
    while (T--) {
        cin >> N;
        cout << ((N % 3) ? 0 : dp[N / 3]) << '\n';
    }

    return 0;
}