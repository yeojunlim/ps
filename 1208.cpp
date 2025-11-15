#include <bits/stdc++.h>
using namespace std;
#define MAX 41
using ll = long long;

int N,S;
int A[MAX];
vector<ll> sums[2];
ll ans;
pair<int,int> cnt;
pair<int,int> idxs;

void f(int i, ll sum, int ari)
{
    if ((ari==0 && i>=N/2) || (ari==1 && i>=N))
    {
        sums[ari].push_back(sum);
        return;
    }
    f(i+1,sum+A[i],ari);
    f(i+1,sum,ari);
}

int main()
{
    scanf("%d %d",&N,&S);
    for (int i=0;i<N;i++) scanf("%d",&A[i]);

    f(0,0LL,0);
    f(N/2,0LL,1);
    sort(sums[0].begin(),sums[0].end());
    sort(sums[1].begin(),sums[1].end());

    int s=0, e=sums[1].size()-1;
    while (0<=e && s<sums[0].size())
    {
        if (sums[0][s]+sums[1][e]>S) e--;
        else if (sums[0][s]+sums[1][e]<S) s++;
        else
        {
            cnt.first = 1;
            cnt.second = 1;
            idxs.first = sums[0][s];
            idxs.second = sums[1][e];
            while (++s < sums[0].size() && sums[0][s] == idxs.first) cnt.first++;
            while (0 <= --e && sums[1][e] == idxs.second) cnt.second++;
            ans += 1LL*cnt.first*cnt.second;
        }
    }

    printf("%lld\n",ans - (S==0?1:0));

    return 0;
}