#include <stdio.h>
void fun(long long x, long long n)
{
    long long s = 0;
    long long eq = 1;
    for (int i = 2; i <= n; i += 2)
    {
        eq = eq * x * x;
        s += eq;
    }

    printf("%lld", s);
}
int main()
{
    long long x, n;
    scanf("%lld %lld", &x, &n);
    fun(x, n);

    return 0;
}

// #include <stdio.h>
// void fun(long long x, long long n)
// {
//     long long s = 0;
//     long long eq = x;
//     int j = 2;
//     while (j <= n)
//     {
//         for (int i = 1; i < j; i++)
//         {
//             eq *= x;
//         }
//         s += eq;
//         eq = x;
//         j += 2;
//     }
//     printf("%lld", s);
// }
// int main()
// {
//     long long x, n;
//     scanf("%lld %lld", &x, &n);
//     fun(x, n);

//     return 0;
// }