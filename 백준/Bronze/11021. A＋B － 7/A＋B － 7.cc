#include <cstdio>

int T,A,B;

int main()
{
    scanf("%d", &T);
    for (int i=0;i<T;i++)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i+1, A+B);
    }
}