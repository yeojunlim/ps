#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int i, j;
  string A, B, lcs;

  cin >> A >> B;

  for (i = 0; i < A.size(); i++) {
    for (j = 0; j < B.size(); j++) {
      dp[i + 1][j + 1] = ((A[i] == B[j]) ? dp[i][j] + 1 : max(dp[i + 1][j], dp[i][j + 1]));
    }
  }

  while (i > 0 && j > 0) {
    if (dp[i][j] == dp[i - 1][j]) {
        i--;
    } else if (dp[i][j] == dp[i][j - 1]) {
        j--;
    } else {
        i--; j--;
        lcs = A[i] + lcs;
    }
  }

  cout << dp[A.size()][B.size()] << '\n' << lcs;

  return 0;
}