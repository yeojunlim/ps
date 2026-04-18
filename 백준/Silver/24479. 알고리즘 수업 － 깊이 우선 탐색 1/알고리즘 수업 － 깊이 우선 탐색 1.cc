#include <bits/stdc++.h>
using namespace std;

vector<set<int>> adj;
vector<bool> visited;
vector<int> order;
int cnt = 1;

void dfs(int u) {
    visited[u] = true;
    order[u - 1] = cnt++;

    for (int next : adj[u]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, R, u, v;

    cin >> N >> M >> R;
    adj.resize(N + 1);
    visited.resize(N + 1);
    order.resize(N);
    while (M--) {
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }

    dfs(R);
    for (int i : order) {
        cout << i << '\n';
    }

    return 0;
}