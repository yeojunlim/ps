#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr int MOD = 1'000'000'007;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;

  cin >> N;

  vector<ll> dp(N + 1);
  dp[0] = 1;
  dp[1] = 2;
  dp[2] = 7;
  ll sum = 1;

  for (int i = 3; i <= N; i++) {
    dp[i] = (dp[i - 1] * 2 + dp[i - 2] * 3 + sum * 2) % MOD;
    sum = (sum + dp[i - 2]) % MOD;
  }

  cout << dp[N];

  return 0;
}