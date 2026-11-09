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

    // column matrix = jei matrix er column ekta sei matrix ke column matrix bole
    if (c == 1) // 5column_matrix.c
    {
        printf("column matrix\n");
    }

    // zero matrix = jei matrix er sob upadan 0 ba zero take zero ba null matrix bole
    int count = 0; // 6zero_matrix.c
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count == (r * c))
    {
        printf("zero matrix\n");
    }

    // square_matrix = kono matrix er row and column soman hole setake square matrix bola hoy
    if (r == c) // 7square_matrix.c
    {
        printf("square matrix\n");
    }

    // diagonal_matrix = kono square matrix er korner upadan gulo bade baki sob upadan zero hole take diagonal matrix bole
    int count1 = 0;
    for (int i = 0; i < r; i++) // 8diagonal_matrix.c
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j && a[i][j] != 0)
            {
                count1++;
            }
        }
    }
    if (count1 == 0)
    {
        printf("diagonal matrix\n");
    }

    // scalar_matrix = kono korno matrix er mukkho korner sokol upadan ekoi hole take scalar matrix bole
    int count2 = 0;
    for (int i = 0; i < r; i++) // 9scalar_matrix.c
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j && a[i][j] != 0)
            {
                count2++;
            }
        }
    }
    int count3 = 0;
    if (count2 == 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j && a[i][j] != a[0][0])
                {
                    count3++;
                }
            }
        }
    }
    if (count3 == 0)
    {
        printf("scalar matrix\n");
    }

    // unit_matrix = kono korno matrix er mukkho korner sokol upadan 1 hole take unit matrix bole
    int count4 = 0;
    for (int i = 0; i < r; i++) // 10unit_matrix.c
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j && a[i][j] != 0)
            {
                count4++;
            }
        }
    }
    int count5 = 0;
    if (count3 == 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j && a[i][j] != 1)
                {
                    count5++;
                }
            }
        }
    }
    if (count5 == 0)
    {
        printf("unit matrix\n");
    }

    for (int i = 0; i < r; i++) // out paowar loop
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}