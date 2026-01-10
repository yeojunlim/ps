#include <cstdio>
#include <cstdlib>

int main()
{
    int A;
    char B[4];
    
    scanf("%d\n%s", &A, B);

    printf("%d\n", (int)(B[2] - '0')*A);
    printf("%d\n", (int)(B[1] - '0')*A);
    printf("%d\n", (int)(B[0] - '0')*A);
    printf("%d\n", atoi(B)*A);

    return 0;
}