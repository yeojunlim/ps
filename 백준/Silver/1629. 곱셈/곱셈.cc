#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull pow_(int base, int exp, int mod)
{
    if (exp == 0) return 1;
    else if (exp == 1) return base % mod;

    if (exp % 2 == 0)
    {
        ull d = pow_(base, exp / 2, mod);
        return d * d % mod;
    }

    ull d = pow_(base, exp / 2, mod);
    return (d * d % mod) * (base % mod) % mod;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int A, B, C;

    cin >> A >> B >> C;

    cout << pow_(A, B, C);

    return 0;
}