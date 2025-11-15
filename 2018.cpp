#include <bits/stdc++.h>
#define MAX 10'000'001
using namespace std;
typedef long long ll;

int N;
int rst=0;
ll sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    int lo=1,hi=1;
    while(lo<=hi && hi<=N)
    {
        sum=(lo+hi)*(hi-lo+1)/2;
        if (sum==N)
        {
            rst++;
            lo++;
            hi++;
        }
        else if (sum>N) lo++;
        else hi++;
    }

    cout << rst << "\n";

    return 0;
}