#include <bits/stdc++.h>
using namespace std;

int half;
int N, R, C;
long long ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> R >> C;
    while (N != 0)
    {
        half = (1 << (N - 1));
        if (R < half && C < half) N--;
        else if (R < half && C >= half)
        {
            ans += (1 << (2 * N - 2));
            N--;
            C -= half;
        }
        else if (R >= half && C < half)
        {
            ans += (1 << (2 * N - 1));
            N--;
            R -= half;
        }
        else
        {
            ans += (1 << (2 * N - 1)) + (1 << (2 * N - 2));
            N--;
            R -= half;
            C -= half;
        }
    }
    cout << ans;

    return 0;
}