#include <cstdio>
#include <algorithm>
#define MAXN 1001

int N,A[MAXN],DP[MAXN];

int main()
{
    DP[0]=1;
    scanf("%d",&N);
    for (int i=0;i<N;i++) scanf("%d",&A[i]);
    for (int i=0;i<N;i++)
    {
        DP[i]=1;
        for (int j=0;j<i;j++)
        {
            if (A[j]<A[i])
            {
                DP[i]=std::max(DP[i],DP[j]+1);
            }
        }
    }
    printf("%d\n",*(std::max_element(DP,DP+N)));
    return 0;
}