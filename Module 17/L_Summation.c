#include <stdio.h>
void fun(int a[], int n, int i, long long sum)
{
    if (i == n)
    {
        printf("%lld", sum);
        return;
    }
    sum += a[i];
    fun(a, n, i + 1, sum);
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
    long long sum = 0;
    fun(a, n, 0, sum);

    return 0;
}