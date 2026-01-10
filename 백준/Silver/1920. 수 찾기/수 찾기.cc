#include <cstdio>
#include <algorithm>
#define MAXN 100001
typedef long long ll;
using namespace std;

int N,M;
ll A[MAXN],num;

int main()
{
    scanf("%d",&N);
    for (int i=0;i<N;i++) scanf("%lld",&A[i]);
    sort(A,A+N);
    scanf("%d",&M);

    for (int i=0;i<M;i++)
    {
        scanf("%lld",&num);
        printf("%d\n",(int)binary_search(A,A+N,num));
    }

    return 0;
}