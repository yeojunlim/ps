#include <cstdio>

int A3, A2, A1, B3, B2, B1;

int main()
{
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &A3, &A2, &A1, &B3, &B2, &B1);
    bool didAWin = A3*3+A2*2+A1 > B3*3+B2*2+B1;
    bool wasDraw = A3*3+A2*2+A1 == B3*3+B2*2+B1;
    printf((didAWin) ? "A" : (wasDraw) ? "T" : "B");
    return 0;
}