#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull second = 0;

ull get(int n) {
    static map<int, ull> dp;

    if (n <= 2) {
        return 1;
    }

    if (dp.find(n) != dp.end()) {
        return dp[n];
    }

    second++;
    return dp[n] = get(n - 1) + get(n - 2);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;

    cin >> n;

    cout << get(n) << ' ' << second;

    return 0;
}