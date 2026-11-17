#include <stdio.h>
void fun(int a[], int index, int count, int m, long long sum)
{
    sum += a[index];
    if (count == m)
    {
        printf("%lld\n", sum);
        return;
    }

    fun(a, index - 1, count + 1, m, sum);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long sum = 0;
    int index = n - 1, count = 1;
    fun(a, index, count, m, sum);

    return 0;
}