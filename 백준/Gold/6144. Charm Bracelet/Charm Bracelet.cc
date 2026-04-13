#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    int W, D;
    vector<int> dp;

    cin >> N >> M;
    dp.assign(M + 1, 0);
    for (int i = 0; i < N; i++) {
        cin >> W >> D;
        for (int j = M; j >= W; j--) {
            dp[j] = max(dp[j], dp[j - W] + D);
        }
    }

    cout << dp.back();

    return 0;
}