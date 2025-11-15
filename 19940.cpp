#include <cstdio>
#include <cstdlib>
#include <vector>
#define MAXT 101
typedef long long ll;
using namespace std;

int T;
ll N;
vector<ll> rst;

vector<ll> solve(ll time)
{
    ll h=time/60;
    ll t=(time-h*60)/10;
    ll o=time-h*60-t*10;

    while (o>5)
    {
        ++t;
        o-=10;
    }
    while (t>3)
    {
        ++h;
        t-=6;
    }

    vector<ll> actions(5,0);
    actions[0]=h;
    if (t>0) actions[1]=t;
    else actions[2]=llabs(t);

    if (o>0) actions[3]=o;
    else actions[4]=llabs(o);

    while (actions[2]>0 && actions[3]==5)
    {
        --actions[2];
        actions[3]=0;
        actions[4]+=5;
    }

    return actions;
}

int main()
{
    scanf("%d", &T);
    for (int i=0;i<T;i++)
    {
        scanf("%lld",&N);
        rst=solve(N);
        for (int j=0;j<5;j++) printf("%lld ",rst[j]);
        printf("\n");
    }
    return 0;
}
