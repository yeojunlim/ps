#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

inline int get_dp(int i, int j) { return ((i < 0 || j < 0) ? 0 : dp[i][j]); }

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  string A, B;

  cin >> A >> B;
  dp.resize(B.size());
  for (int i = 0; i < B.size(); i++) {
    for (int j = 0; j < A.size(); j++) {
      dp[i].push_back((B[i] == A[j]) ? get_dp(i - 1, j - 1) + 1
                                     : max(get_dp(i, j - 1), get_dp(i - 1, j)));
    }
  }

  cout << dp.back().back();

  return 0;
}