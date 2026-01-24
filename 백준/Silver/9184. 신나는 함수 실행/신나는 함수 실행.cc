#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll w(ll a, ll b, ll c) {
  static map<tuple<ll, ll, ll>, ll> DP;

  if (a <= 0 || b <= 0 || c <= 0) {
    return 1;
  }

  if (DP.find({a, b, c}) != DP.end()) {
    return DP[{a, b, c}];
  }

  if (a > 20 || b > 20 || c > 20) {
    DP[{a, b, c}] = w(20, 20, 20);
    return DP[{a, b, c}];
  }

  if (a < b && b < c) {
    DP[{a, b, c}] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    return DP[{a, b, c}];
  }

  DP[{a, b, c}] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) -
                  w(a - 1, b - 1, c - 1);
  return DP[{a, b, c}];
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b, c;

  while (cin >> a >> b >> c && !(a == -1 && b == -1 && c == -1)) {
    cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
  }

  return 0;
}
