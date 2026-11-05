#include <stdio.h>
int count_odd(int *a, int n)
{
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    return odd_count;
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

    int odd_count = count_odd(a, n);
    printf("%d", odd_count);
    return 0;
}