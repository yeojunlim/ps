#include <bits/stdc++.h>
using namespace std;

constexpr short MOD = 15746;

short t01(int n) {
    static map<int, short> dp = {{1, 1}, {2, 2}, {3, 3}};

    if (dp.find(n) != dp.end()) {
        return dp[n];
    }

    return dp[n] = ((t01(n - 1) + t01(n - 2)) % MOD);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;

    cin >> N;

    cout << t01(N);

    return 0;
}