#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull P(int n)
{
    static map<int, ull> DP = {
        {1, 1ULL},
        {2, 1ULL},
        {3, 1ULL}
    };
    if (DP.find(n) == DP.end()) DP[n] = P(n - 2) + P(n - 3);
    return DP[n];
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int T, N;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << P(N) << '\n';
    }

    return 0;
}