#include <cstdio>
#include <algorithm>
#define MAXN 5001

int N,K,rst;
int A[MAXN];

bool compare(int i, int j)
{
    return j<i;
}

int main()
{
    scanf("%d %d", &N, &K);
    for (int i=0;i<N;i++)
    {
        scanf("%d", &A[i]);
    }
    std::sort(A, A+MAXN, compare);

    for (int i=0;i<K;i++)
    {
        rst += (A[i] - i);
    }

    printf("%d\n", rst);

    return 0;
}
