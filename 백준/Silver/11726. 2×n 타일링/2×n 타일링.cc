#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    static map<int, int> DP = {{0, 0}, {1, 1}};

    if (DP.find(n) != DP.end()) return DP[n];

    DP[n] = (fib(n - 1) + fib(n - 2)) % 10007;
    return DP[n];
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;

    cin >> N;

    cout << fib(N + 1);

    return 0;
}
