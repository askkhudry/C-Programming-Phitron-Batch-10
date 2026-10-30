#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int years = n / 365;
    int month = (n - (years * 365)) / 30;
    int days = (n - (years * 365)) - (month * 30);

    printf("%d years\n%d months\n%d days", years, month, days);
    return 0;
}