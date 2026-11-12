#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (n % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            int even_count = 0;
            int odd_count = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even_count++;
                }
                else
                {
                    odd_count++;
                }
            }
            if (even_count == odd_count)
            {
                printf("0\n");
            }
            else if (even_count > odd_count)
            {
                printf("%d\n", even_count - (n / 2));
            }
            else if (odd_count > even_count)
            {
                printf("%d\n", odd_count - (n / 2));
            }
        }
    }

    return 0;
}