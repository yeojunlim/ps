#include <bits/stdc++.h>
using namespace std;
using pos_t = pair<int, int>;

constexpr int MAX = 1001;
constexpr int dr[] = {0, 1, 0, -1};
constexpr int dc[] = {1, 0, -1, 0};

inline pos_t moved(const pos_t pos, const int d) {
    return {pos.first + dr[d], pos.second + dc[d]};
}

int M, N;
int box[MAX][MAX];

queue<pos_t> q;
bool visited[MAX][MAX];
int bfs() {
    int date = 0;

    for (; !q.empty(); q.pop()) {
        if (q.front().first == -1 && q.front().second == -1) {
            date++;
            if (q.size() != 1) q.push({-1, -1});
            continue;
        }

        for (int d = 0; d < 4; d++) {
            auto [nr, nc] = moved(q.front(), d);
            
            if (nr < 0 || N <= nr || nc < 0 || M <= nc) continue;
            if (visited[nr][nc] || box[nr][nc] != 0) continue;

            visited[nr][nc] = true; q.push({nr, nc});
            box[nr][nc] = 1;
        }
    }
    
    return date - 1;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) q.push({i, j});
        }
    }
    q.push({-1, -1});

    auto ans = bfs();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (box[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }

    cout << ans;
    return 0;
}