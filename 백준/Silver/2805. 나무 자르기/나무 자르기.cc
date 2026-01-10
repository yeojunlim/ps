#include <cstdio>
#include <algorithm>
#define MAXN 1000001
typedef long long ll;
using namespace std;

ll N,M;
ll Tree[MAXN];

ll solution()
{
    ll lo=0,mid,hi=*max_element(Tree,Tree+N),rst=0LL;
    while (lo<=hi)
    {
        ll h=0LL; // 총 나무 높이
        mid=(lo+hi)/2;
        // Tree 돌면서 mid값보다 큰 값(잘린 뒤 길이가 1 이상인 값)이 있으면 잘린 뒤 길이 총 높이에 더함
        for (ll i=0;i<N;i++) if (Tree[i]>mid) h+=Tree[i]-mid;
        if (h<M) hi=mid-1; // 총 높이가 필요한 높이보다 작다면 hi 낮추기(mid(절단기 높이)도 낮아짐)
        else
        {
            rst=mid; // 나무를 필요한 만큼 가져갔다면 최종 높이 현재 절단기 높이로 바꾸기
            lo=mid+1; // 그리고 lo 높이기(mid(절단기 높이)도 높아짐)
        }
    }
    return rst; // 이진탐색이 끝나면 최종 높이 반환
}

int main()
{
    scanf("%lld %lld",&N,&M);
    for (ll i=0;i<N;i++) scanf("%lld",&Tree[i]);
    printf("%lld\n",solution());
    return 0;
}