#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int X[200'005];
ll sum[200'005];

inline ll cost(int s, int e, int p) {
    return 1LL * X[p] * ((p - s) - (e - p)) - (sum[p - 1] - sum[s - 1]) + sum[e] - sum[p];
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, Q, L, R, s, e;

    cin >> N >> Q >> X[0];
    sum[0] = X[0];
    for (int i = 1; i < N; i++) {
        cin >> X[i];
        sum[i] = sum[i - 1] + X[i];
    }

    while (Q--) {
        cin >> L >> R;
        s = lower_bound(X, X + N, L) - X;
        e = upper_bound(X, X + N, R) - X - 1;
        cout << max(cost(s, e, s), cost(s, e, e)) - cost(s, e, (s + e + 1) >> 1) << '\n';
    }
    
    return 0;
}