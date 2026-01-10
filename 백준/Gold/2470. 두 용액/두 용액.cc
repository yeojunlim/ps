#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int N;
int A[MAX];
pair<int,int> liquid(10e8,10e8);

int mixed(const pair<int,int>& s) { return (s.first+s.second); }
int mixed(const int s1,const int s2) { return (s1+s2); }

int main()
{
    scanf("%d",&N);
    for (int i=0;i<N;i++) scanf("%d",&A[i]);
    sort(A,A+N);

    int lo=0,hi=N-1;
    while (lo<hi)
    {
        if (abs(mixed(A[lo],A[hi]))<abs(mixed(liquid))) liquid={A[lo],A[hi]};

        if (mixed(A[lo],A[hi])<0) lo++;
        else hi--;
    }

    printf("%d %d\n",liquid.first,liquid.second);

    return 0;
}