#include <cstdio>

int N;

int main()
{
    scanf("%d", &N);
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            printf("@@@@@");
        }
        printf("\n");
    }
    
    for (int i = 0; i<N*3; i++)
    {
        for (int j = 0; j<N; j++)
        {
            printf("@");
        }
        printf("\n");
    }
    
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            printf("@@@@@");
        }
        printf("\n");
    }
    
    return 0;
}