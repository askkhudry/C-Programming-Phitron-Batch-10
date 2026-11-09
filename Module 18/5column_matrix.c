#include <stdio.h>
int main()
{
    // matrix creat + input
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) // input neyar loop
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // column matrix = jei matrix er column ekta sei matrix ke column matrix bole
    if (c == 1) // 5column_matrix.c
    {
        printf("column matrix\n");
    }
    else
    {
        printf("this is not e column matrix\n");
    }
    return 0;
}