#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, a;
    int before = 0, mx = INT_MIN;

    cin >> n;
    if (n == 1) {
        cin >> a;
        cout << a;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a;
        mx = max(mx, max(before + a, a));
        before = max(before + a, a);
    }
    
    cout << mx;

    return 0;
}