#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;
  deque<int> cards;
  
  cin >> N;
  for (; N != 0; N--) {
    cards.push_front(N);
  }

  while (cards.size() > 1) {
    cards.pop_front();
    cards.push_back(cards.front());
    cards.pop_front();
  }

  cout << cards[0];

  return 0;
}