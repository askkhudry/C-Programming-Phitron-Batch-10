// fibonacci with recursion
#include <stdio.h>
void fun(int n, long long fib1, long long fib2, long long fib, int num)
{
    if (n == 1)
    {
        printf("%lld\n", fib1);
        return;
    }
    else if (n == 2)
    {
        printf("%lld\n", fib2);
        return;
    }
    if (num == n + 1)
    {
        printf("%lld\n", fib2);
        return;
    }
    fib = fib2 + fib1;
    fib1 = fib2;
    fib2 = fib;
    fib = 0;
    fun(n, fib1, fib2, fib, num + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long fib1 = 0;
    long long fib2 = 1;
    long long fib;
    fun(n, fib1, fib2, fib, 3);
    return 0;
}

// //fibonacci with loop
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long fib[n + 1];

//     fib[1] = 0;
//     fib[2] = 1;
//     for (int i = 3; i <= n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     printf("%lld\n", fib[n]);

//     return 0;
// }