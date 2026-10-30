#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    long long a = n * (n + 1);
    long long sum = a / 2;

    printf("%lld", sum);

    return 0;
}