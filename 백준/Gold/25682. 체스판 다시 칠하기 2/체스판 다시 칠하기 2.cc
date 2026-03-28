#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, K, cnt, ans = INT_MAX;
    vector<string> board;
    vector<vector<int>> sum;

    cin >> N >> M >> K;
    board.resize(N);
    sum.assign(N + 1, vector<int>(M + 1, 0));
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((i + j) % 2) {
                cnt = (board[i][j] == 'B') ? 1 : 0;
            } else {
                cnt = (board[i][j] == 'W') ? 1 : 0;
            }
            sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + cnt;
        }
    }

    for (int i = K; i <= N; i++) {
        for (int j = K; j <= M; j++) {
            cnt = sum[i][j] - sum[i - K][j] - sum[i][j - K] + sum[i - K][j - K];
            ans = min(ans, min(cnt, K*K - cnt));
        }
    }

    cout << ans;

    return 0;
}