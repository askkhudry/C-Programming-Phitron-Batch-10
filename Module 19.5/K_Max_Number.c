#include <stdio.h>
void fun(int a[], int n, int val, int i)
{
    if (i == n)
    {
        printf("%d\n", val);
        return;
    }
    if (val < a[i])
    {
        val = a[i];
    }
    fun(a, n, val, i + 1);
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
    int val = a[0];
    fun(a, n, val, 1);

    return 0;
}