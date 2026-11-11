#include <stdio.h>
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    long long a[n + 1];
    // long long prifix[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        // prifix[a[i]]++;
    }
    while (q--)
    {
        long long x;
        scanf("%lld", &x);
        // if (prifix[x] == 0)
        // {
        //     printf("not found\n");
        // }
        // else
        // {
        //     printf("found\n");
        // }

        // genaral way but tle khete hobe
        int is_found = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == x)
            {
                is_found = 1;
                break;
            }
        }
        if (is_found == 1)
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }
    }

    return 0;
}
