#include <cstdio>
#define MAX 11

int N,K,res,rem;
int A[MAX];

int main()
{
    scanf("%d %d",&N,&K);
    rem=K;
    for (int i=0;i<N;i++) scanf("%d",&A[i]);
    for (int i=N-1;i>-1;i--)
    {
        if (res>=K) break;
        res+=rem/A[i]; // 동전 갯수에다 남은 돈/현재 단위(갯수) 추가
        rem-=rem/A[i]*A[i];
    }
    printf("%d\n",res);
}