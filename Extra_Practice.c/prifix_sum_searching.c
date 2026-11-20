#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long a[n + 1];
    long long prefix_sum[n + 1];
    prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        prefix_sum[i] = a[i] + prefix_sum[i - 1];
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", prif[i]);
    // }
    int q;
    scanf("%d", &q);

    while (q--)
    {
        int flag = 0;
        long long s;
        scanf("%lld", &s);
        for (int i = 1; i <= n; i++)
        {
            if (prefix_sum[i] >= s)
            {
                printf("%d\n", i);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("-1\n");
        }
    }

    return 0;
}
