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

    // diagonal_matrix = kono square matrix er korner upadan gulo bade baki sob upadan zero hole take diagonal matrix bole

    if (r == c)
    {
        int count1 = 0;
        for (int i = 0; i < r; i++) // 8diagonal_matrix.c
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j && a[i][j] != 0)
                {
                    count1++;
                    break;
                }
            }
        }
        if (count1 == 0)
        {
            printf("primary diagonal matrix\n");
        }
        else
        {
            printf("this is not e diagonal matrix\n");
        }
    }
    else
    {
        printf("this is not e diagonal matrix\n");
    }
    return 0;
}