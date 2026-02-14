#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, r, g, b;
    tuple<int, int, int> cost;

    cin >> N;
    while (N--) {
        cin >> r >> g >> b;
        cost = {min(get<1>(cost), get<2>(cost)) + r, min(get<0>(cost), get<2>(cost)) + g, min(get<0>(cost), get<1>(cost)) + b};
    }

    cout << min(min(get<0>(cost), get<1>(cost)), get<2>(cost));

    return 0;
}