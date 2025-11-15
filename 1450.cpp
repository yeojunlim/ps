#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N,C;
int w[31];
vector<ll> sums[2];
ll ans;

void get_sum(int i, ll sum, int ari)
{
    if ((ari==0 && i>=N/2) || (ari==1 && i>=N))
    {
        sums[ari].push_back(sum);
        return;
    }
    get_sum(i+1,sum+w[i],ari);
    get_sum(i+1,sum,ari);
}

int main()
{
    scanf("%d %d",&N,&C);
    for (int i=0;i<N;i++) scanf("%d",&w[i]);

    get_sum(0,0LL,0);
    get_sum(N/2,0LL,1);
    sort(sums[0].begin(),sums[0].end());
    sort(sums[1].begin(),sums[1].end());

    int e=sums[1].size()-1;
    for (size_t s=0;s<sums[0].size();s++)
    {
        while (e>=0 && sums[0][s]+sums[1][e]>C) e--;
        ans+=e+1;
    }

    printf("%lld\n",ans);

    return 0;
}