#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll _2nm1;

ll N, K;

void hanoi(ll n, ll k, ll s, ll m, ll e)
{
    _2nm1 = (1LL << (n - 1));
    if (n == 0) return;
    if (k == _2nm1) cout << s << ' ' << e << '\n';
    else if (k < _2nm1) hanoi(n-1, k, s, e, m);
    else hanoi(n-1, k-_2nm1, m, s, e);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;

    hanoi(N, K, 1LL, 2LL, 3LL);
    return 0;
}