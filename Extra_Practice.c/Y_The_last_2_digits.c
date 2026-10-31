#include <stdio.h>
int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long mul = (a % 100) * (b % 100) * (c % 100) * (d % 100);

    long long last_2digit = mul % 100;
    if (last_2digit < 10)
    {
        printf("0");
    }
    printf("%lld", last_2digit);

    return 0;
}