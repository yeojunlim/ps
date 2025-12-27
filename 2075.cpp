#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int a;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> N;
    for (int i = 0; i < N; i++) q.push((cin >> a, a));
    for (int i = 0; i < N * (N-1); i++)
    {
        cin >> a;
        if (a > q.top())
        {
            q.pop();
            q.push(a);
        }
    }

    cout << q.top();

    return 0;
}