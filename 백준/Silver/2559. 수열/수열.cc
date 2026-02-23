#include <bits/stdc++.h>
#define GET(idx) ((idx == -1) ? 0 : sT[idx])
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, K;
    vector<int> sT;
    int mx;

    cin >> N >> K;
    sT.resize(N);

    cin >> sT[0];
    for (int i = 1; i < N; i++) {
        cin >> sT[i];
        sT[i] += sT[i - 1];
    }

    mx = sT[K - 1];
    for (int i = 1; i <= N - K; i++) {
        if (sT[i + K - 1] - sT[i - 1] > mx) {
            mx = sT[i + K - 1] - sT[i - 1];
        }
    }

    cout << mx;

    return 0;
}