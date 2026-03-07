#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;
  vector<int> A, dp, q, ans;

  cin >> N;
  A.resize(N);
  dp.assign(N, 1);
  q.assign(N, -1);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (A[j] < A[i] && dp[i] <= dp[j]) {
        dp[i] = dp[j] + 1;
        q[i] = j;
      }
    }
  }

  auto it = max_element(dp.begin(), dp.end());
  cout << *it << '\n';
  for (int mx = it - dp.begin(); mx >= 0; mx = q[mx]) {
    ans.push_back(A[mx]);
  }
  for (auto it = ans.rbegin(); it != ans.rend(); it++) {
    cout << *it << ' ';
  }

  return 0;
}