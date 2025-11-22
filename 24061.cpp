#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> A;
int a;

void merging(int l, int mid, int r)
{
    int tmp[N];
    int i = l;
    int j = mid + 1;
    int t = 0;
    while (i <= mid && j <= r)
    {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while (i <= mid) tmp[t++] = A[i++];
    while (j <= r) tmp[t++] = A[j++];
    i = l;
    t = 0;
    while (i <= r)
    {
        A[i++] = tmp[t++];
        if (--K == 0)
        {
            for (int element : A) cout << element << ' ';
            cout << '\n';
            exit(0);
        }
    }
}

void merge_sort(int l, int r)
{
    if (l < r)
    {
        int mid = floor((l + r) / 2);
        merge_sort(l, mid);
        merge_sort(mid+1, r);
        merging(l, mid, r);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    for (int i = 0; i < N; i++) A.push_back((cin >> a, a));

    merge_sort(0, N-1);
    cout << -1 << '\n';

    return 0;
}