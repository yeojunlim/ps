#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(b) == abs(a)) return b < a;
        return abs(b) < abs(a);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, x;
    priority_queue<int, vector<int>, cmp> pq;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
            {
                cout << 0 << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
            continue;
        }
        pq.push(x);
    }

    return 0;
}