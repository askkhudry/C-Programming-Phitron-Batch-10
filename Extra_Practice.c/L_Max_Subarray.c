#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int max;
        for (int i = 1; i <= n; i++)
        {
            max = a[i];
            for (int j = i; j <= n; j++)
            {
                if (max <= a[j])
                {
                    max = a[j];
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }

    return 0;
}