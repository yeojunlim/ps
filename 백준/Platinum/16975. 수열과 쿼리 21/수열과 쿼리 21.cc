#include <cstdio>
#define MAXN 100002
typedef long long ll;

int N,M;
ll A[MAXN],Diff[MAXN],Tree[MAXN];
int method,a,b,c;

void update_tree(int idx, int val)
{
    while (idx<N+1)
    {
        Tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

void update_diff(int start, int end, int val)
{
    Diff[start]+=val;
    update_tree(start, val);
    if (end<N+1)
    {
        Diff[end+1]-=val;
        update_tree(end+1, -val);
    }
}

ll get_num(int idx)
{
    // ll rst=0;
    // for (int i=1;i<idx+1;i++)
    // {
    //     rst+=Diff[i];
    // }
    // return rst;
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
    scanf("%d",&N);
    for (int i=1;i<N+1;i++)
    {
        scanf("%lld",&A[i]);
        Diff[i]=A[i]-((i==1)?0:A[i-1]);
        update_tree(i, Diff[i]);
    }
    scanf("%d",&M);

    for (int i=0;i<M;i++)
    {
        scanf("%d",&method);
        if (method==1)
        {
            scanf("%d %d %d",&a,&b,&c);
            update_diff(a,b,c);
        }
        else
        {
            scanf("%d",&a);
            printf("%lld\n", get_num(a));
        }
    }
}