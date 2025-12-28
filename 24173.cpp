#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> A;
int a;

void swp(int a, int b)
{
    swap(A[a], A[b]);
    if (--K == 0)
    {
        cout << min(A[a], A[b]) << ' ' << max(A[a], A[b]) << '\n';
        exit(0);
    }
}

void heapify(int k, int n)
{
    int left = 2 * k;
    int right = 2 * k + 1;
    int smaller;

    if (right <= n)
    {
        if (A[left] < A[right]) smaller = left;
        else smaller = right;
    }
    else if (left <= n) smaller = left;
    else return;

    if (A[smaller] < A[k])
    {
        swp(k, smaller);
        heapify(smaller, n);
    }
}

void heap_sort()
{
    for (int i = N/2; i > 0; i--) heapify(i, N);

    for (int i = N; i > 1; i--)
    {
        swp(1, i);
        heapify(1, i - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    A.push_back(0);

    cin >> N >> K;
    for (int i = 0; i < N; i++) A.push_back((cin >> a, a));

    heap_sort();
    cout << -1 << '\n';

    return 0;
}