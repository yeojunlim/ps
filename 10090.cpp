#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
vector<int> A;
ll rst;
int tmp[1000001];

void merging(int s, int m, int e)
{
    int l_size = m - s + 1;
    int i = s;
    int j = m + 1;
    int t = 0;
    while (i <= m && j <= e)
    {
        if (A[i] <= A[j])
        {
            tmp[t++] = A[i++];
            l_size--;
        }
        else
        {
            tmp[t++] = A[j++];
            rst += l_size;
        }
    }
    while (i <= m) tmp[t++] = A[i++];
    while (j <= e) tmp[t++] = A[j++];

    i = s;
    t = 0;
    while (i <= e) A[i++] = tmp[t++];
}

void merge_sort(int s, int e)
{
    if (s < e)
    {
        int m = floor((s + e) / 2);
        merge_sort(s, m);
        merge_sort(m + 1, e);
        merging(s, m, e);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    int a;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A.push_back(a);
    }

    merge_sort(0, N - 1);
    cout << rst << '\n';

    return 0;
}