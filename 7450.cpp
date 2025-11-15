#include <cstdio>
#include <algorithm>
#define MAX 100001
using namespace std;

int N,L,rst=0;
int item[MAX];

int solution()
{
    int lo=0,hi=N-1;
    int rst=0;
    while (lo<hi+1)
    {
        if (item[lo]+item[hi]<L+1)
        {
            lo++;
            hi--;
        }
        else hi--;
        rst++;
    }
    
    return rst;
}

int main()
{
    scanf("%d %d",&N,&L);
    for (int i=0;i<N;i++) scanf("%d",&item[i]);

    sort(item,item+N);    
    printf("%d\n",solution());

    return 0;
}
