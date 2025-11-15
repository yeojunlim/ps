#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
typedef long long ll;

int N,S;
int A[MAX];
int len=100001;

int main()
{
    scanf("%d %d",&N,&S);
    for (int i=0;i<N;i++) scanf("%d",&A[i]);

    int lo=0,hi=0;
    ll sum=A[0];
    while (lo<=hi && hi<N)
    {
        if (sum>=S)
        {
            if (hi-lo+1<len) len=hi-lo+1;
            sum-=A[lo];
            lo++;
        }
        else
        {
            hi++;
            sum+=A[hi];
        }
    }

    printf("%d\n",(len!=100001)?len:0);

    return 0;
}