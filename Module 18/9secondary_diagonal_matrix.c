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

    // secondary_diagonal_matrix = kono square matrix er gouno korner upadan gulo bade baki sob upadan zero hole take secondary diagonal matrix bole

    if (r == c)
    {
        int count1 = 0;
        for (int i = 0; i < r; i++) // 9secondary_diagonal_matrix.c
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j != r - 1 && a[i][j] != 0) // gouno korner index er jogfol sob somoy row - 1 hobe, tai chek dibo je i+j jog korle seta row -1 er soman na hoy kina, jodi soman na hoy tahole amra gouno korner bahire achi ebong bahirer value guloke chek dicchi je segulo 0 noy kina, jodi 0 na hoy tahole bujhe jabo je eta secondery diagonal matrix noy
                {
                    count1++;
                    break;
                }
            }
        }
        if (count1 == 0)
        {
            printf("secondary diagonal matrix\n");
        }
        else
        {
            printf("this is not e secondary diagonal matrix\n");
        }
    }
    else
    {
        printf("this is not a secondary diagonal matrix\n");
    }
    return 0;
}