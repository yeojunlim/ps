#include <bits/stdc++.h>
using namespace std;

constexpr int N = 5, R = 7;
const int dr[] = {0, 1, 0, -1};
const int dc[] = {1, 0, -1, 0};

uint mSeat = 0; // mSeat의 i번째 비트는 i번 자리가 이다솜파인지 아닌지 나타냄

uint mPrin = 0; // 조합 함수에서 선택된 자리
int ans = 0;

bool is_connected() {
    queue<int> q;
    uint mVis = 0;

    int st = countr_zero(mPrin); // 선택된 자리 중 하나 뽑기
    q.push(st); mVis |= (1 << st);
    while (!q.empty()) {
        int pos = q.front(); q.pop();

        for (int d = 0; d < 4; d++) {
            int nr = pos / N + dr[d], nc = pos % N + dc[d];
            if (nr < 0 || N <= nr || nc < 0 || N <= nc) continue;

            int np = nr * N + nc;
            // 선택된 자리가 아니거나 방문했다면
            if (~mPrin & (1 << np) || mVis & (1 << np)) continue;

            q.push(np); mVis |= (1 << np);
        }
    }

    // 방문했던 자리의 갯수가 R개면 모든 자리가 인접해 있음
    return popcount(mVis) == R;
}

void get_prin(int start, int depth) {
    if (depth == R) {
        // 모든 자리가 인접해 있고 선택된 자리 중 이다솜파가 4명 이상이라면
        if (is_connected() && popcount(mSeat & mPrin) >= 4) ans++;
        return;
    }

    for (int i = start; i < N * N; i++) {
        mPrin |= (1 << i);
        get_prin(i + 1, depth + 1);
        mPrin &= ~(1 << i);
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    char tmp;
    for (int i = 0; i < N * N; i++) {
        cin >> tmp;
        if (tmp == 'S') mSeat |= (1 << i);
    }

    get_prin(0, 0);
    cout << ans;

    return 0;
}