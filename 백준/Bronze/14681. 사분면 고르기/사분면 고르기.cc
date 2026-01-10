#include <cstdio>

int x,y;

int main()
{
    scanf("%d\n%d", &x, &y);
    if (0<x && 0<y)
    {
        printf("1\n");
    }
    else if (0>x && 0<y)
    {
        printf("2\n");
    }
    else if (0>x && 0>y)
    {
        printf("3\n");
    }
    else
    {
        printf("4\n");
    }
    return 0;
}