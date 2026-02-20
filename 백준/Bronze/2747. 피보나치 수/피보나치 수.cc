#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

ull fib(short n) {
    if (n == 0 || n == 1) {
        return n;
    }

    static vector<ull> dp(n + 1, 0);
    if (dp[n]) {
        return dp[n];
    }

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    short n;
    cin >> n;
    cout << fib(n);

    return 0;
}