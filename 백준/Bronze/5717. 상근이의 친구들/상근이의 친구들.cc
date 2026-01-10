#include <cstdio>

int main()
{
    int M,F;
    while (1)
    {
        M = 0;
        F = 0;
        scanf("%d %d", &M, &F);
        if (M == 0 && F == 0)
        {
            break;
        }
        printf("%d\n", M+F);
    }
    
    return 0;
}