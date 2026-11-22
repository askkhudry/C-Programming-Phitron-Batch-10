#include <stdio.h>
long long nCr(int n, int r)
{
    if (r > n)
    {
        return 0LL;
    }
    if (r == 0 || n == r)
    {
        return 1LL;
    }
    long long ans = nCr(n - 1, r - 1) + nCr(n - 1, r);
    return ans;
}
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    long long ans = nCr(n, r);
    printf("%lld\n", ans);

    return 0;
}

// #include <stdio.h>
// long long fun(int start, int end)
// {
//     if (start == end)
//     {
//         return 1LL;
//     }
//     long long mul = start * fun(start - 1, end);
//     return mul;
// }
// long long fun2(int r)
// {
//     if (r == 1)
//     {
//         return 1LL;
//     }
//     long long mul2 = r * fun2(r - 1);
//     return mul2;
// }
// int main()
// {
//     int n, r;
//     scanf("%d %d", &n, &r);

//     int start = n, end = n - r;
//     long long mul = fun(start, end);
//     long long mul2 = fun2(r);
//     printf("%lld\n", mul / mul2);
//     return 0;
// }