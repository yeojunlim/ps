// #include <bits/stdc++.h>
// using namespace std;

// constexpr int MOD = 1'000'000'007;

// vector<unsigned long long> dp(3334);
// int tiling(int n) {
//   dp[0] = 1; dp[1] = 3;

//   if (dp[n]) {
//     return dp[n];
//   }

//   for (int i = 0; i < n; i++) {
//     dp[n] = (dp[n] + dp[i] * (n - i) * 2) % MOD;
//   }
//   dp[n] = (dp[n] + dp[n - 1]) % MOD;

//   return dp[n];
// }

// int main() {
//   cin.tie(nullptr)->sync_with_stdio(false);

//   int T, N;

//   cin >> T;

//   for (int i = 0; i < T; i++) {
//     cin >> N;

//     if (N % 3 != 0) {
//       cout << 0;
//       continue;
//     }

//     cout << tiling(N / 3) << '\n';
//   }

//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
  void push(int x) {
    s_.push(x);
  }

  void pop() {
    if (s_.empty()) {
      cout << "-1\n";
      return;
    }
    cout << s_.top() << '\n';
    s_.pop();
  }

  void size() {
    cout << s_.size() << '\n';
  }

  void empty() {
    cout << ((s_.empty()) ? 1 : 0) << '\n';
  }

  void top() {
    if (s_.empty()) {
      cout << "-1\n";
      return;
    }
    cout << s_.top() << '\n';
  }

private:
  stack<int> s_;
};

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;
  string cmd;
  int x;
  Stack s;

  cin >> N;

  for (; N > 0; N--) {
    cin >> cmd;
    if (cmd == "push") {
      cin >> x;
      s.push(x);
    } else if (cmd == "pop") {
      s.pop();
    } else if (cmd == "size") {
      s.size();
    } else if (cmd == "empty") {
      s.empty();
    } else {
      s.top();
    }
  }

  return 0;
}