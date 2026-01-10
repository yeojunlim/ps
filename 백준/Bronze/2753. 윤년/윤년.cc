#include <cstdio>

int year;

int main()
{
    scanf("%d", &year);
    bool isLeapYear = (year%4==0 && year%100!=0) || year%400==0;
    printf("%d\n", (isLeapYear) ? 1 : 0);
}