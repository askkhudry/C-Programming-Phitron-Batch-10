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

    // row matrix = jei matrix er row ba sari ekta take row matrix bole
    if (r == 1) // 4row_matrix.c
    {
        printf("row matrix\n");
    }
    else
    {
        printf("this is not e row matrix\n");
    }
    return 0;
}