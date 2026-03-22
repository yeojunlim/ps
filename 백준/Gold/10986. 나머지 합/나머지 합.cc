#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, a, sum = 0;
    long long ans = 0;
    vector<int> mod;

    cin >> N >> M;
    mod.resize(M);
    mod[0] = 1;
    while (N--) {
        cin >> a;
        sum = (sum + a) % M;
        mod[sum]++;
    }

    for (int cnt : mod) {
        ans += (1LL * cnt * (cnt - 1)) >> 1;
    }

    cout << ans;

    return 0;
}