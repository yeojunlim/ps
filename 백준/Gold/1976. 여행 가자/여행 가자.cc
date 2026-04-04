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

  int N, M;
  int isConnected, u, v;

  cin >> N >> M;
  DisjointSet set(N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cin >> isConnected;
        if (isConnected) {
            set.merge(i + 1, j + 1);
        }
    }
  }

  cin >> u;
  for (int i = 1; i < M; i++) {
    cin >> v;
    if (!set.isInSameSet(u, v)) {
        cout << "NO";
        return 0;
    }
  }

  cout << "YES";

  return 0;
}