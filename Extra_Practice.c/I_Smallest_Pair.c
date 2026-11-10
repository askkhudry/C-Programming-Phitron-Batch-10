#include <stdio.h>
#include <limits.h>
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
        int smallest_sum = INT_MAX;
        int pair_sum = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                pair_sum = a[i] + a[j] + j - i;
                if (smallest_sum > pair_sum)
                {
                    smallest_sum = pair_sum;
                }
            }
        }
        printf("%d\n", smallest_sum);
    }

    return 0;
}