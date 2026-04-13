#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
  void push(int x) {
    q_.push(x);
  }

  void pop() {
    if (q_.empty()) {
      cout << "-1\n";
      return;
    }
    cout << q_.front() << '\n';
    q_.pop();
  }

  void size() {
    cout << q_.size() << '\n';
  }

  void empty() {
    cout << ((q_.empty()) ? 1 : 0) << '\n';
  }

  void front() {
    if (q_.empty()) {
      cout << "-1\n";
      return;
    }
    cout << q_.front() << '\n';
  }

  void back() {
    if (q_.empty()) {
      cout << "-1\n";
      return;
    }
    cout << q_.back() << '\n';
  }

private:
  queue<int> q_;
};

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int N;
  string cmd;
  int x;
  Queue q;

  cin >> N;

  for (; N > 0; N--) {
    cin >> cmd;
    if (cmd == "push") {
      cin >> x;
      q.push(x);
    } else if (cmd == "pop") {
      q.pop();
    } else if (cmd == "size") {
      q.size();
    } else if (cmd == "empty") {
      q.empty();
    } else if (cmd == "front") {
      q.front();
    } else {
      q.back();
    }
  }

  return 0;
}