#include <stdio.h>
long long fun(int a[], int n, int index)
{
    if (index == n)
    {
        return 0;
    }
    long long sum_array = a[index] + fun(a, n, index + 1);
    return sum_array;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long sum_array = fun(a, n, 0);
    printf("%lld\n", sum_array);
    return 0;
}