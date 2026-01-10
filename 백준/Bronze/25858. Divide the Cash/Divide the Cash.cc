#include <cstdio>

int n,d,sum;

int main()
{
    scanf("%d %d", &n, &d);
    int* p = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        sum = sum + p[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", (d/sum)*p[j]);
    }
    
    delete[] p;
    return 0;
}