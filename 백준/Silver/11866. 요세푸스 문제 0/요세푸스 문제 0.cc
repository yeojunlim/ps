#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N, K;
  list<int> linked;
  list<int>::iterator it;

  cin >> N >> K;

  for (int i = 1; i <= N; i++) {
    linked.push_back(i);
  }

  cout << '<';
  for (list<int>::size_type idx = K - 1; linked.size() > 1; idx = (idx + K - 1) % linked.size()) {
    it = linked.begin();
    advance(it, idx);
    cout << *it << ", ";
    linked.erase(it);
  }

  cout << *linked.begin() << '>';

  return 0;
}