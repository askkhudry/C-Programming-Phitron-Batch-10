#include <stdio.h>
void fun(int a[], int n, int index, int max_val)
{
    if (index == n)
    {
        printf("%d\n", max_val);
        return;
    }
    if (max_val < a[index])
    {
        max_val = a[index];
    }
    fun(a, n, index + 1, max_val);
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
    int max_val = a[0];
    fun(a, n, 0, max_val);

    return 0;
}