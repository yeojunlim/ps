#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, candy;
    unordered_map<int, int> cnt;

    cin >> N;
    for (int i = 0; i < (N << 1); i++) {
        cin >> candy;
        cnt[candy]++;
        if (3 <= cnt[candy]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}