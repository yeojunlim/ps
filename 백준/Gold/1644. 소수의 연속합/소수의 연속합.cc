#include <bits/stdc++.h>
#define MAX 4000002
using namespace std;
typedef long long ll;

int N;
vector<int> primes;
ll rst;

void getPrimes(const int N) {
    bool tmp[N+2]={false,false};
    for (int i=2;i<=N;i++) tmp[i]=true;
    for (int i=2;i<=N;i++) {
        if (!tmp[i]) continue;
        primes.push_back(i);
        for(int j=2*i;j<=N;j+=i) tmp[j]=false;
    }
}

int main()
{
    scanf("%d",&N);
    if (N==1)
    {
        printf("0\n");
        return 0;
    }
    getPrimes(N);

    int lo=0,hi=0;
    ll sum=primes[0];
    while (lo<=hi && hi<primes.size())
    {
        if (sum==N)
        {
            rst++;
            sum-=primes[lo];
            lo++;
            hi++;
            sum+=primes[hi];
        }
        else if (sum>N)
        {
            sum-=primes[lo];
            lo++;
        }
        else
        {
            hi++;
            sum+=primes[hi];
        }
    }

    printf("%lld\n",rst);

    return 0;
}