#include <stdio.h>
void fun(long long n, long long count)
{
    if (n < 2)
    {
        printf("%lld\n", count);
        return;
    }
    fun(n / 2, count + 1);
}
int main()
{
    long long n;
    scanf("%lld", &n);
    long long count = 0;
    fun(n, count);

    return 0;
}