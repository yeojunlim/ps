#include <cstdio>

int main()
{
    int HH, MM;
    
    scanf("%d %d", &HH, &MM);
    
    printf("%d", (HH-9)*60+MM);
    
    return 0;
}