#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
private:
    using node_t = int;
    using node_size_t = int;

    vector<node_t> root;
    vector<node_size_t> rank;

public:
    DisjointSet(node_size_t n): root(n), rank(n, 1) {
        iota(root.begin(), root.end(), 0);
    }

    node_t find(node_t u) {
        if (u == root[u]) {
            return u;
        }

        return root[u] = find(root[u]);
    }

    void merge(node_t u, node_t v) {
        node_t ru = find(u);
        node_t rv = find(v);

        if (ru == rv) {
            return;
        }

        if (rank[ru] > rank[rv]) {
            swap(ru, rv);
        }
        root[ru] = rv;
        if (rank[ru] == rank[rv]) {
            rank[rv]++;
        }
    }
};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    int u, v;

    cin >> N;
    DisjointSet ds(N + 1);

    for (int i = 0; i < N - 2; i++) {
        cin >> u >> v;
        ds.merge(u, v);
    }

    auto r1 = ds.find(1);
    for (int i = 2; i <= N; i++) {
        if (r1 != ds.find(i)) {
            cout << 1 << ' ' << i;
            return 0;
        }
    }
}