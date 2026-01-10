#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    map<int, int> S;
    int s;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        S[s]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        cout << S[s] << ' ';
    }

    return 0;
}