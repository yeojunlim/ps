#include <bits/stdc++.h>
using namespace std;

vector<int> A, dp1, dp2;

inline int max_mullyu(int t) {
    return max(max(dp1[t], dp2[t]), dp1[t] + dp2[t] - A[t]);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    
    cin >> N;
    A.resize(N);
    dp1.resize(N);
    dp2.resize(N);

    cin >> A[0];
    dp1[0] = A[0];
    for (int i = 1; i < N; i++) {
        cin >> A[i];
        dp1[i] = max(dp1[i - 1] + A[i], A[i]);
    }
    dp2[N - 1] = A[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        dp2[i] = max(dp2[i + 1] + A[i], A[i]); // 몰?루
    }

    for (int i = 0; i < N; i++) {
        cout << max_mullyu(i) << ' ';
    }

    return 0;
}