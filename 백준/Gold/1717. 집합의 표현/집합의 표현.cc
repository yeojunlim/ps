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

  void merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v)
      return;
    if (rank[u] > rank[v])
      swap(u, v);
    parent[u] = v;
    if (rank[u] == rank[v])
      rank[v]++;
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

  int n, m, command, a, b;
  
  cin >> n >> m;
  DisjointSet set(n);
  while (m--) {
    cin >> command >> a >> b;

    if (command == 0) {
      set.merge(a, b);
      continue;
    }

    cout << (set.isInSameSet(a, b) ? "YES" : "NO") << '\n';
  }

  return 0;
}