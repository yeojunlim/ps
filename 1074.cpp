#include <bits/stdc++.h>
using namespace std;

int half;
int N, R, C;
long long ans;

void Z(int n, int r, int c)
{
    if (n == 0)
    {
        cout << ans;
        return;
    }
    half = (1 << (n-1));
    if (r < half && c < half) Z(n-1, r, c);
    else if (r < half && c >= half)
    {
        ans += (1 << (2 * n - 2));
        Z(n-1, r, c-half);
    }
    else if (r >= half && c < half)
    {
        ans += (1 << (2 * n - 1));
        Z(n-1, r-half, c);
    }
    else
    {
        ans += (1 << (2 * n - 1)) + (1 << (2 * n - 2));
        Z(n-1, r-half, c-half);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> R >> C;
    Z(N, R, C);

    return 0;
}