#include <bits/stdc++.h>
using namespace std;

vector<set<int>> adj;

vector<bool> visited;
void dfs(int u) {
    visited[u] = true;
    cout << u << ' ';

    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty()) {
        int now = q.front(); q.pop();
        cout << now << ' ';

        visited[now] = true;
        for (int v : adj[now]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true; 
            }
        }
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, V, u, v;

    cin >> N >> M >> V;
    adj.resize(N + 1);
    visited.resize(N + 1);
    while (M--) {
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }

    dfs(V);
    cout << '\n';
    visited.assign(N + 1, false);
    bfs(V);

    return 0;
}