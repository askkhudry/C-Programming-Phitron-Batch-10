#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n+1][m+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= 1; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}