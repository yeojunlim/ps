#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    vector<int> v;
    int s, e;

    cin >> N >> M;
    v.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        if (i != 0) v[i] += v[i-1];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s >> e;
        cout << v[e - 1] - ((s != 1) ? v[s - 2] : 0) << '\n';
    }

    return 0;
}