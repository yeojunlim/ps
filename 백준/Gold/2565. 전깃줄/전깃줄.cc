#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    vector<pii> v;
    vector<int> dp;

    cin >> N;
    v.resize(N);
    dp.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (v[j].second < v[i].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << N - *max_element(dp.begin(), dp.end());

    return 0;
}