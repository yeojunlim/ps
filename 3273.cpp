#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int n,x;
int a[MAX];
int cnt;

int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    scanf("%d",&x);

    int lo=0,hi=n-1;
    while (lo<hi)
    {
        if (a[lo]+a[hi]==x)
        {
            cnt++;
            lo++;
            hi--;
        }
        else if (a[lo]+a[hi]>x) hi--;
        else lo++;
    }

    printf("%d\n",cnt);

    return 0;
}