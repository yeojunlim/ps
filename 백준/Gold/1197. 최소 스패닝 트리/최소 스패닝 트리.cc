#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> edge_t;
typedef priority_queue<edge_t, vector<edge_t>, greater<edge_t>> edges_t;

struct DisjointSet {
    vector<int> root, rank;

    DisjointSet(int n): root(n), rank(n, 1) {
        iota(root.begin(), root.end(), 0);
    }

    int find(int u) {
        if(u == root[u])
            return u;
        return root[u] = find(root[u]);
    }

    void merge(int u, int v) {
        u = find(u);
        v = find(v);

        if (u == v) {
            return;
        }

        if(rank[u] > rank[v]) {
            swap(u, v);
        }
        root[u] = v;
        if(rank[u] == rank[v]) {
            rank[v]++;
        }
    }
};

int kruskal(int V, edges_t& edges) {
    int ret = 0;
    DisjointSet sets(V);
    while (!edges.empty()) {
        edge_t edge = edges.top(); edges.pop();
        int u = edge.second.first, v = edge.second.second;
        if (sets.find(u) == sets.find(v)) {
            continue;
        }
        sets.merge(u, v);
        ret += edge.first;
    }
    return ret;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int V, E, A, B, C;
    edges_t edges;

    cin >> V >> E;
    for (int i = 0; i < E; i++) {
        cin >> A >> B >> C;
        edges.push({C, {A, B}});
    }

    cout << kruskal(V + 1, edges);

    return 0;
}