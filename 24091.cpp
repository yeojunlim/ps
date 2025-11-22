#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> A;
int a;

void chk()
{
    if (--K == 0)
    {
        for (int element : A) cout << element << ' ';
        cout << '\n';
        exit(0);
    }
}

int part(int l, int r)
{
    int x = A[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (A[j] <= x)
        {
            swap(A[++i], A[j]);
            chk();
        }
    }
    if (i + 1 != r)
    {
        swap(A[i + 1], A[r]);
        chk();
    }
    return i + 1;
}

void quick_sort(int l, int r)
{
    if (l < r)
    {
        int pivot = part(l, r);
        quick_sort(l, pivot - 1);
        quick_sort(pivot + 1, r);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    for (int i = 0; i < N; i++) A.push_back((cin >> a, a));
    quick_sort(0, N-1);

    cout << -1 << '\n';

    return 0;
}