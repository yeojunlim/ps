#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
typedef long long ll;

int N;
ll X;
ll c;
vector<ll> C;
int cnt,remain;
int lo,hi;

int main()
{
    scanf("%d %lld",&N,&X);
    for (int i=0;i<N;i++)
    {
        scanf("%lld",&c);
        // 이미 다 채워진 병
        if (c>=X) cnt++;
        else C.push_back(c);
    }
    sort(C.begin(),C.end());

    lo=0;
    hi=C.size()-1;
    remain=C.size();

    // 두 개를 합치면 새 걸로 바꿀 수 있는 병
    while (lo<hi)
    {
        if (C[lo]+C[hi]+X/2>=X)
        {
            cnt++;
            lo++;
            hi--;
            remain-=2;
        }
        else lo++;
    }

    // 남은 병은 3개씩 묶으면 무조건 X 이상
    if (remain>=3) cnt+=remain/3;

    printf("%d\n",cnt);

    return 0;
}