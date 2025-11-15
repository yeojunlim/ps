#include <cstdio>
#include <algorithm>
#define MAXN 100001
typedef long long ll;
using namespace std;

int N,M;
ll A[MAXN],num;

int bin_search(ll num)
{
    int lo=0,mid,hi=N-1;
    while (lo<=hi)
    {
        mid=(lo+hi)/2;
        if (A[mid]==num) return mid;
        else if (A[mid]>num) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}

int main()
{
    scanf("%d",&N);
    for (int i=0;i<N;i++) scanf("%lld",&A[i]);
    sort(A,A+N);
    scanf("%d",&M);

    for (int i=0;i<M;i++)
    {
        scanf("%lld",&num);
        printf("%d\n",(bin_search(num)==-1)?0:1);
    }

    return 0;
}