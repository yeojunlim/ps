#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N, K, W, V;
  vector<int> dp;

  cin >> N >> K;
  dp.assign(K + 1, 0);
  
  for (int i = 0; i < N; i++) {
    cin >> W >> V;
    for (int j = K - W; j >= 0; j--) {
     dp[j + W] = max(dp[j + W], dp[j] + V);
    }
  }

  cout << dp.back();

  return 0;
}