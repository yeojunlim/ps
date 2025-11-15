#include <bits/stdc++.h>
#define MAX 5001
using namespace std;
typedef long long ll;

int N;
int liquid[MAX];
ll rst[3]={1<<30,1<<30,1<<30};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i=0;i<N;i++) cin >> liquid[i];
    sort(liquid,liquid+N);

    for (int i=0;i<N-1;i++)
    {
        int lo=i+1,hi=N-1;
        ll now;
        while (lo<hi && hi<N)
        {
            now=0LL+liquid[i]+liquid[lo]+liquid[hi];
            if (now==0)
            {
                cout << liquid[i] << " " << liquid[lo] << " " << liquid[hi] << "\n";
                return 0;
            }
            else if (llabs(now)<llabs(0LL+rst[0]+rst[1]+rst[2]))
            {
                rst[0]=liquid[i];
                rst[1]=liquid[lo];
                rst[2]=liquid[hi];
            }
            if (now>0) hi--;
            else lo++;
        }
    }

    for (int i=0;i<3;i++) cout << rst[i] << " ";
    cout << "\n";

    return 0;
}