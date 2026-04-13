#include <bits/stdc++.h>
using namespace std;

int to1(int n) {
  static unordered_map<int, int> dp = {{1, 0}};

  if (dp.find(n) != dp.end()) {
    return dp[n];
  }

  dp[n] = min(((n % 3 == 0) ? to1(n / 3) : INT_MAX), min(to1(n - 1), ((n % 2 == 0) ? to1(n / 2) : INT_MAX))) +
          1;
  return dp[n];
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;

  cin >> N;

  cout << to1(N);

  return 0;
}