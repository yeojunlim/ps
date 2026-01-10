#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    
    int divisors[50];
    for (int i = 0; i < n; i++) {
        scanf("%d", &divisors[i]);
    }
    
    sort(divisors, divisors + n);
    
    printf("%d\n", divisors[0] * divisors[n-1]);
    
    return 0;
}