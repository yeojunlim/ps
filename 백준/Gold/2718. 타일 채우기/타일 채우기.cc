#include <bits/stdc++.h>
using namespace std;

inline int tile_exc(const int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 4;
    } else if (n & 1) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int T, N;
    vector<int> dp(25, 0);
    dp[0] = 1;

    for (int i = 0; i <= 21; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] += dp[i - j] * tile_exc(j);
        }
    }

    cin >> T;
    while (T--) {
        cin >> N;
        cout << dp[N] << '\n';
    }
    
    return 0;
}