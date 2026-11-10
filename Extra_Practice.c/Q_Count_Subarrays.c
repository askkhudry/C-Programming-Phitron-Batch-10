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
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int val = a[i];
            for (int j = i; j <= n; j++)
            {
                if (val <= a[j])
                {
                    count++;
                    val = a[j];
                    continue;
                }
                break;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}