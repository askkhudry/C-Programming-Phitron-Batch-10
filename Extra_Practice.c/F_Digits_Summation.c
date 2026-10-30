#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    int c = a % 10;
    int d = b % 10;

    printf("%d", c + d);

    return 0;
}