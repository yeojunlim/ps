#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, a;
    int before = 0, mx = INT_MIN;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        before = max(before + a, a);
        mx = max(mx, before);
    }
    
    cout << mx;

    return 0;
}