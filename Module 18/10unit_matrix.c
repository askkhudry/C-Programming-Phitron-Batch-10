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

    // unit_matrix = kono square matrix er mukkho korner upadan gulo 1 and baki sob upadan zero hole take unit matrix bole

    if (r == c)
    {
        int count1 = 0;
        for (int i = 0; i < r; i++) // diagonal_matrix ki na
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

        int count5 = 0; // 10unit_matrix.c
        if (count1 == 0)
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (i == j && a[i][j] != 1)
                    {
                        count5++;
                        break;
                    }
                }
            }
            if (count5 == 0)
            {
                printf("unit matrix\n");
            }
            else
            {
                printf("this is not a unit matrix\n");
            }
        }
        else
        {
            printf("this is not a unit matrix\n");
        }
    }
    else
    {
        printf("this is not a unit matrix\n");
    }
    return 0;
}