#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int n;
    scanf("%d", &n);

    // // specific row print
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if (i == n)
    //         {
    //             printf("%d ", a[i][j]);
    //         }
    //     }
    // }
    for (int j = 0; j < c; j++) // jokhon row print korbo tokhon loop cholbe column er upor karon ei khetre row fixt
    {
        printf("%d ", a[n][j]);
    }

    printf("\n");

    // // specific column print
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if (j == n)
    //         {
    //             printf("%d\n", a[i][j]);
    //         }
    //     }
    // }
    for (int i = 0; i < r; i++) // jokhon column print korte chai tokhon loop cholbe row er upor karon ei khetre column fixt
    {
        printf("%d\n", a[i][n]);
    }
    return 0;
}