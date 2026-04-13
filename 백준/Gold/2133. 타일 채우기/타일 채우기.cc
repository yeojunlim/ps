#include <bits/stdc++.h>
using namespace std;

int tiling(int n) {
  static map<int, int> DP = {{0, 1}, {1, 0}, {2, 3}};

  if (DP.find(n) != DP.end()) {
    return DP[n];
  }

  DP[n] = tiling(n - 2) * 3;
  for (int i = n - 4; i >= 0; i -= 2) {
    DP[n] += tiling(i) * 2;
  }
  return DP[n];
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;

  cin >> N;

  cout << tiling(N);

  return 0;
}
