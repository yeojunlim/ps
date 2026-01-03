#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    vector<pii> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    int ans = 0;

    cin >> N;
    v.resize(N);
    for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    
    pq.push(0);
    for (int i = 0; i < N; i++)
    {   
        if (pq.top() < v[i].second || pq.size() < v[i].first)
        {
            if (pq.size() >= v[i].first) pq.pop();
            pq.push(v[i].second);
        }
    }

    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }

    cout << ans;

    return 0;
}