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
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
        if (a[i] == 0)
        {
            zero++;
        }
    }
    for (int i = 0; i < zero; i++)
    {
        printf("0 ");
    }

    return 0;
}