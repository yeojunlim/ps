#include <bits/stdc++.h>
using namespace std;

inline void inc(pair<int, int>& p, const char c) {
    if (c == '0') {
        p.first++;
    } else {
        p.second++;
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string str;
    pair<int, int> part;

    cin >> str;
    inc(part, str[0]);

    for (int i = 1; i < str.size(); i++) {
        if (str[i - 1] != str[i]) {
            inc(part, str[i]);
        }
    }
    
    cout << min(part.first, part.second);

    return 0;
}