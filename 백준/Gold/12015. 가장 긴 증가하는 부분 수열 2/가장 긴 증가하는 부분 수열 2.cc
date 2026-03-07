#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, a;
    vector<int> dp;

    cin >> N >> a;
    dp.push_back(a);
    for (int i = 1; i < N; i++) {
        cin >> a;
        if (a > dp.back()) {
            dp.push_back(a);
        } else {
            *lower_bound(dp.begin(), dp.end(), a) = a;
        }
    }

    cout << dp.size();

    return 0;
}