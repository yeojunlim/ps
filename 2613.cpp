#include <cstdio>
#include <cstdlib>
#include <numeric>
#define MAXN 301
using namespace std;

int N,M,avg,cnt[MAXN],bead[MAXN];

int solution()
{
    avg=accumulate(bead,bead+N,0)/M;
    int lo=0,mid,hi=N-1,total=0;
    while (lo<=hi)
    {
        mid=(lo+hi)/2;
        // cnt=hi-lo+1;
        int now=accumulate(bead+lo,bead+hi,0);
        if (abs(total-avg)>abs(now-avg))
        {
            hi+=(now<total)?-mid:mid;
            total=now;
        }
        else
        {
            
        }
    }
}

int main()
{
    scanf("%d %d",&N,&M);
    for (int i=0;i<N;i++) scanf("%d",&bead[i]);
    printf("%d\n",solution());
    for (int i=0;i<M;i++) printf("%d ",cnt[i]);
    printf("\n");


    return 0;
}