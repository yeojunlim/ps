#include <cstdio>
#define MAXN 1000000
typedef long long ll;

int N,M,K;
ll a,b,c;
ll A[MAXN+2],Tree[MAXN+2];

void update(int idx, ll val)
{
    while (idx<=N)
    {
        Tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

ll sum(int idx)
{
    ll rst=0;
    while (idx>0)
    {
        rst+=Tree[idx];
        idx-=(idx&-idx);
    }
    return rst;
}

int main()
{
    scanf("%d %d %d",&N,&M,&K);
    for(int i=1;i<=N;i++)
    {
        scanf("%lld",&A[i]);
        update(i,A[i]);
    }
    for(int i=0;i<M+K;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if (a==1)
        {
            ll diff=c-A[b];
            A[b]=c;
            update(b,diff);
        }
        else
        {
            printf("%lld\n",sum(c)-sum(b-1));
        }
    }
    return 0;
}