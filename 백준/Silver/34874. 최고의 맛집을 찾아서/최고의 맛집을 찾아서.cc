#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, ans;
    vector<vector<int>> star;

    cin >> N >> M;
    star.resize(N);
    for (int i = 0; i < N; i++) {
        star[i].resize(M + 1);
        for (int j = 0; j < M; j++) {
            cin >> star[i][j];
        }
        star[i][M] = *max_element(star[i].begin(), star[i].end());
    }

    for (int i = 0; i < M; i++) {
        ans = 0;
        for (int j = 0; j < N; j++) {
            if (star[j][i] < star[j][M]) {
                ans++;
            }
        }
        cout << ans << ' ';
    }

    return 0;
}