#include <bits/stdc++.h>
using namespace std;

int N, Q, K;
vector<int> A;
int a;

void swp(int i1, int i2)
{
    swap(A[i1], A[i2]);
    if (--K == 0)
    {
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << ' ';
        }
        cout << '\n';
        exit(0);
    }
}

int partition_(int p, int r)
{
    int x = A[r];
    int i = p-1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            swp(++i, j);
        }
    }
    if (++i != r) swp(i, r);
    return i;
}

int select_(int p, int r, int q)
{
    if (p == r) return A[p];
    int t = partition_(p, r);
    int k = t - p + 1;
    if (q < k) return select_(p, t-1, q);
    else if (q == k) return A[t];
    else return select_(t+1, r, q-k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> Q >> K;
    for (int i = 0; i < N; i++) A.push_back((cin >> a, a));

    select_(0, N-1, Q);
    cout << -1 << '\n';

    return 0;
}