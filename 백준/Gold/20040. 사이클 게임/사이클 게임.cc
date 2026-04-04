#include <bits/stdc++.h>
using namespace std;

struct DisjointSet {
private:
  vector<int> parent, rank;

  int find(int u) {
    if (u == parent[u])
      return u;
    return parent[u] = find(parent[u]);
  }

public:
  DisjointSet(int n) : parent(n + 1), rank(n + 1, 1) {
    for (int i = 0; i <= n; i++)
      parent[i] = i;
  }

  bool merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v)
      return true;
    if (rank[u] > rank[v])
      swap(u, v);
    parent[u] = v;
    if (rank[u] == rank[v])
      rank[v]++;

    return false;
  }

  inline bool isInSameSet(int u, int v) {
    if (find(u) == find(v)) {
      return true;
    }
    return false;
  }
};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, u, v;

    cin >> n >> m;
    DisjointSet set(n);

    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        if (set.merge(u, v)) {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}