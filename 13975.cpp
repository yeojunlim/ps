#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    ll K;
    ll p;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll ans;

    cin >> T;
    for (ll i = 0; i < T; i++)
    {
        cin >> K;
        ans = 0;
        for (ll j = 0; j < K; j++) pq.push((cin >> p, p));
        while (pq.size() > 1)
        {
            ll tmp = 0;
            tmp += pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            ans += tmp;
            pq.push(tmp);
        }
        cout << ans << '\n';
        while (!pq.empty()) pq.pop();
    }

    return 0;
}