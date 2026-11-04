#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 1; j <= n; j++)
    {
        int temp = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = temp;
    }
    for (int i = 1; i <= n; i++)
    {
        int temp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = temp;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}