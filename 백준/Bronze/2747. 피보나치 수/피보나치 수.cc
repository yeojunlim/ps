#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

ull fib(short n) {
    if (n == 0) {
        return 0;
    }

    ull a = 0, b = 1;
    for (int i = 1; i < n; i++) {
        tie(a, b) = make_tuple(b, a + b);
    }

    return b;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    short n;
    cin >> n;
    cout << fib(n);

    return 0;
}