#include <bits/stdc++.h>
using namespace std;

class StrWrapper {
public:
    StrWrapper(const string& s) {
        cnt_.resize(s.size());
        for (int i = 0; i < s.size(); i++) {
            cnt_[i].resize(26);
            if (i != 0) {
                copy(cnt_[i - 1].begin(), cnt_[i - 1].end(), cnt_[i].begin());
            }
            cnt_[i][ctoi(s[i])]++;
        }
    }

    int count(char a, int l, int r) {
        return cnt_[r][ctoi(a)] - ((l == 0) ? 0 : cnt_[l - 1][ctoi(a)]);
    }

private:
    vector<vector<int>> cnt_;

    inline int ctoi(char c) const {
        return c - 'a';
    }
};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string S;
    int q, l, r;
    char a;

    cin >> S >> q;
    StrWrapper str(S);

    for (int i = 0; i < q; i++) {
        cin >> a >> l >> r;
        cout << str.count(a, l, r) << '\n';
    }

    return 0;
}