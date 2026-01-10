#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    set<string> S;
    string s;
    int cnt = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        S.insert(s);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (S.find(s) != S.end()) cnt++;
    }
    cout << cnt;

    return 0;
}