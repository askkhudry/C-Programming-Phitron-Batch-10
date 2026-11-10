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
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (i == j)
        {
            printf("%d ", a[i]);
            break;
        }
        printf("%d ", a[i]);
        i++;
        printf("%d ", a[j]);
        j--;
    }

    return 0;
}