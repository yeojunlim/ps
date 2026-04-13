#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    double A, B, V;

    cin >> A >> B >> V;

    cout << (int)ceil((V - A) / (A - B)) + 1;

    return 0;
}