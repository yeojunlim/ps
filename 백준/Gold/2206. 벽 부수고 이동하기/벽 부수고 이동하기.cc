#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1001;
constexpr int dr[] = {0, 1, 0, -1};
constexpr int dc[] = {1, 0, -1, 0};

int N, M;
int board[MAX][MAX];

queue<tuple<int, int, int>> q;
int dist[MAX][MAX][2];
int bfs() {
    q.push({0, 0, 0}); dist[0][0][0] = 1;
    while (!q.empty()) {
        auto [r, c, k] = q.front(); q.pop();
        if (r == N-1 && c == M-1) return dist[r][c][k];

        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d], nc = c + dc[d];
            if (nr < 0 || N <= nr || nc < 0 || M <= nc) continue;

            int nk = k + board[nr][nc];
            if (nk > 1 || dist[nr][nc][nk]) continue;

            dist[nr][nc][nk] = dist[r][c][k] + 1;
            q.push({nr, nc, nk});
        }
    }

    return -1;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> N >> M; char c;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> c;
            board[i][j] = c - '0';
        }
    }

    cout << bfs();

    return 0;
}