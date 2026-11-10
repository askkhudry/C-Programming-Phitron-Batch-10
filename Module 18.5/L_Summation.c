#include <stdio.h>
void fun(int a[], int n, long long sum_array, int index)
{
    if (index == n)
    {
        printf("%lld", sum_array);
        return;
    }
    sum_array += a[index];
    fun(a, n, sum_array, index + 1);
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
    long long sum_array = 0;
    fun(a, n, sum_array, 0);

    return 0;
}