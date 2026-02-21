#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int A, B, C, T;

    cin >> A >> B >> C >> T;

    if (T <= 30) {
        cout << A;
    } else if (T > 30) {
        cout << A + ceil((double)(T - 30) / B) * C;
    }

    return 0;
}