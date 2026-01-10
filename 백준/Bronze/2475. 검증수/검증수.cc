#include <cstdio>
#include<cmath>

int num[5];
int rst = 0;

int main()
{
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    for (int i = 0; i<5; i++)
    {
        rst += pow(num[i], 2);
    }
    rst = rst % 10;
    printf("%d\n", rst);
    return 0;
}