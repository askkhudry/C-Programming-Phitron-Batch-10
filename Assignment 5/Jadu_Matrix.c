#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (n == m)
    {
        int is_jadu = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j && a[i][j] != 1)
                {
                    printf("NO\n");
                    return 0;
                }
                else if (i + j == n - 1 && a[i][j] != 1)
                {
                    printf("NO\n");
                    return 0;
                }
                else if (i != j && i + j != n - 1 && a[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
        if (is_jadu)
        {
            printf("YES\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}