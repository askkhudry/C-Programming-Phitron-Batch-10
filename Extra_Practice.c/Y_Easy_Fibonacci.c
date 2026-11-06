#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    long long fib = 0, fib1 = 0, fib2 = 1;
    if (n == 1)
    {
        printf("%lld", fib1);
    }
    else if (n == 2)
    {
        printf("%lld %lld", fib1, fib2);
    }
    else
    {
        printf("%lld %lld", fib1, fib2);
        for (int i = 3; i <= n; i++)
        {
            fib = fib2 + fib1;
            printf(" %lld", fib);
            fib1 = fib2;
            fib2 = fib;
            fib = 0;
        }
    }

    return 0;
}