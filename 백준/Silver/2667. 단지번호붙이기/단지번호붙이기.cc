#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 25;
const int dr[] = {0, 1, 0, -1};
const int dc[] = {1, 0, -1, 0};

int N;
bool danji[MAX][MAX];

bool vis[MAX][MAX];
int dfs(int r, int c) {
    vis[r][c] = true;
    int size = 1;

    for (int d = 0; d < 4; d++) {
        int nr = r + dr[d], nc = c + dc[d];
        if (nr < 0 || N <= nr || nc < 0 || N <= nc) continue;
        if (vis[nr][nc] || !danji[nr][nc]) continue;

        size += dfs(nr, nc);
    }

    return size;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    char tmp;

    cin >> N;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            cin >> tmp; danji[r][c] = (tmp == '1');
        }
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (vis[r][c] || !danji[r][c]) continue;
            pq.push(dfs(r, c));
        }
    }

    cout << pq.size() << '\n';
    for (; !pq.empty(); pq.pop()) {
        cout << pq.top() << '\n';
    }

    return 0;
}