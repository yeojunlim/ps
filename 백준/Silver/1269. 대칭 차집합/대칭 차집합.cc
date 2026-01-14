#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    set<int> S;
    int e, common = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> e;
        S.insert(e);
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> e;
        if (S.find(e) != S.end()) common++;
    }

    cout << N + M - common * 2;

    return 0;
}