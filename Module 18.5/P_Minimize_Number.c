#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    int i = 0;
    while (1)
    {
        if (a[i] % 2 == 0)
        {
            a[i] /= 2;
            i++;
        }
        else
        {
            break;
        }
        if (i == n)
        {
            i = 0;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}