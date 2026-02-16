#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Tree {
private:
    int n;
    vector<ll> diff, tree;

    void update_tree(int idx, int val) {
        while (idx <= n) {
            tree[idx] += val;
            idx += (idx & -idx);
        }
    }

    ll get_num(int idx) {
        ll rst = 0;

        while (idx > 0) {
            rst += tree[idx];
            idx -= (idx & -idx);
        }

        return rst;
    }

    void update_diff(int s, int e, int val) {
        diff[s] += val;
        update_tree(s, val);
        if (e < n) {
            diff[e + 1] -= val;
            update_tree(e + 1, -val);
        }
    }

public:
    explicit Tree() {
    int before = 0, now = 0;

    cin >> n;
    diff.resize(n + 1);
    tree.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        before = now;
        cin >> now;
        diff[i] = now - before;
        update_tree(i, diff[i]);
    }
}
    void solve() {
        int M, cmd, a, b, c;

        cin >> M;

        for (int i = 0; i < M; i++) {
            cin >> cmd;
            if (cmd == 1) {
                cin >> a >> b >> c;
                update_diff(a, b, c);
            } else {
                cin >> a;
                cout << get_num(a) << '\n';
            }
        }
    }
};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    Tree tree;
    tree.solve();

    return 0;
}