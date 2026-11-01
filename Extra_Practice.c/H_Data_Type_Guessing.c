#include <stdio.h>
int main()
{
    long long n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    long long data = (n * k) / a;

    if ((n * k) % a != 0) // orthat zero na hole eta ekta double songkha, kenona double hole vagsesh zero hoy na , ar double na hole vagsesh zero hoy
    {
        printf("double");
    }
    else if (data <= 2147483647)
    {
        printf("int");
    }
    else
    {
        printf("long long");
    }

    return 0;
}