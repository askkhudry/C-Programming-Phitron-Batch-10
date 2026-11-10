#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf(" %c", &a[i][j]);
        }
    }
    int x, y;
    scanf("%d %d", &x, &y);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         printf("%c", a[i][j]);
    //     }
    //     printf("\n");
    // }

    int neighbors = 1;

    // int dan =x; y + 1;
    if (a[x][y + 1] == '.')
    {
        neighbors = 0;
    }
    // int bam =x; y - 1;
    if (a[x][y - 1] == '.')
    {
        neighbors = 0;
    }

    // int upor = x - 1;y;
    if (a[x - 1][(y)] == '.')
    {
        neighbors = 0;
    }
    // int nicher = x + 1;y;
    if (a[x + 1][(y)] == '.')
    {
        neighbors = 0;
    }
    // int upor_bam = (x-1);(y-1);
    if (a[(x - 1)][(y - 1)] == '.')
    {
        neighbors = 0;
    }
    // int upor_dan = (x-1);(y+1);
    if (a[(x - 1)][(y + 1)] == '.')
    {
        neighbors = 0;
    }
    // int niche_bam = (x+1);(y-1);
    if (a[(x + 1)][(y - 1)] == '.')
    {
        neighbors = 0;
    }
    // int niche_dan = (x+1);(y+1);
    if (a[(x + 1)][(y + 1)] == '.')
    {
        neighbors = 0;
    }

    if (neighbors == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}