#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    set<int> has;
    int n;

    cin >> N;
    for (int i = 0; i < N; i++) has.insert((cin >> n, n));
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        if (has.find(n) == has.end()) cout << 0 << ' ';
        else cout << 1 << ' ';
    }

    return 0;
}