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

    // square_matrix = kono matrix er row and column soman hole setake square matrix bola hoy
    if (r == c) // 7square_matrix.c
    {
        printf("square matrix\n");
    }
    else
    {
        printf("this is not a square matrix\n");
    }
    return 0;
}