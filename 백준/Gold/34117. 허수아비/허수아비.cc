#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, P, h;
    priority_queue<int, vector<int>, greater<int>> pq;
    int total = 0;

    cin >> N >> P;
    for (int i = 0; i < N; i++)
    {
        cin >> h;
        pq.push(h);
        total += h;

        if (total < P)
        {
            cout << -1 << ' ';
            continue;
        }

        while (total - pq.top() >= P)
        {
            total -= pq.top();
            pq.pop();
        }

        cout << pq.size() << ' ';
    }

    return 0;
}