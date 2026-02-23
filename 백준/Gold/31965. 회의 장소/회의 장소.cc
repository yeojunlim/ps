#include <bits/stdc++.h>
#define LB(e) (lower_bound(X.begin(), X.end(), e) - X.begin())
using namespace std;
typedef long long ll;

vector<int> X;
vector<ll> sX;

/**
 * @brief 회의 정보 받아서 비용 return
 * @param p 회의가 열리는 집의 인덱스
 * @param s 회의에 참여하는 가장 왼쪽 집의 인덱스
 * @param e 회의에 참여하는 가장 오른쪽 집의 인덱스
 * 비용 = 회의 장소 * (왼쪽 좌표 갯수 - 오른쪽 좌표 갯수) - 왼쪽 좌표 구간합 + 오른쪽 좌표 구간합
 */ 
ll cost(int p, int s, int e) {
    ll lS = (p == 0) ? 0 : ((s == 0) ? sX[p - 1] : sX[p - 1] - sX[s - 1]);
    ll rS = sX[e] - sX[p];
    return 1LL * X[p] * ((p - s) - (e - p)) - lS + rS;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int N, Q;
    int L, R;

    cin >> N >> Q;
    X.resize(N);
    sX.resize(N);

    cin >> X[0];
    sX[0] = X[0];

    for (int i = 1; i < N; i++) {
        cin >> X[i];
        sX[i] = sX[i - 1] + X[i];
    }

    for (int i = 0; i < Q; i++) {
        cin >> L >> R;
        int L_idx = LB(L);
        int R_idx = LB(R);
    
        if (X[R_idx] != R) {
            R_idx--;
        }
        if (L_idx == R_idx || L_idx + 1 == R_idx) {
            cout << "0\n";
            continue;
        }

        priority_queue<ll> Costs;
        for (int i = L_idx; i <= R_idx; i++) {
            Costs.push(cost(i, L_idx, R_idx));
        }
        
        ll rst = 0, top = -1;
        while (!Costs.empty()) {
            top = Costs.top();
            Costs.pop();
            rst += top - Costs.top();
        }

        cout << rst << '\n';
    }


    return 0;
}