#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long mul = a * b * c;
        long long missing = m / mul;
        if (m % mul == 0)
        {
            printf("%lld\n", missing);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}