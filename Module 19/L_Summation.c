#include <stdio.h>
void fun(int a[], int n, int index, long long sum)
{
    if (index == n)
    {
        printf("%lld\n", sum);
        return;
    }

    sum += a[index];

    fun(a, n, index + 1, sum);
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
    long long sum = a[0];
    fun(a, n, 1, sum);

    return 0;
}