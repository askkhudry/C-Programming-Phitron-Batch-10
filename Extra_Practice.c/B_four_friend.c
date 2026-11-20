#include <stdio.h>
#include <limits.h>
int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int max = INT_MIN, min = INT_MAX;
    if (max < a)
    {
        max = a;
    }
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }
    if (min > a)
    {
        min = a;
    }
    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    if (min > d)
    {
        min = d;
    }
    printf("%lld\n", max - min);

    return 0;
}