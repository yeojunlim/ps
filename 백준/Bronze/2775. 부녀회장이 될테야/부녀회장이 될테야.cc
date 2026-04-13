#include <bits/stdc++.h>
using namespace std;

int resident(short a, short b) {
    if (a == 0) return b;

    static map<pair<short, short>, int> residents;

    if (residents.find({a, b}) != residents.end()) {
        return residents[{a, b}];
    }

    residents[{a, b}] = 0;
    for (int i = 0; i <= b; i++) {
        residents[{a, b}] += resident(a - 1, i);
    }
    return residents[{a, b}];
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    short T, k, n;

    cin >> T;
    while (T--) {
        cin >> k >> n;
        cout << resident(k, n) << '\n';
    }

    return 0;
}