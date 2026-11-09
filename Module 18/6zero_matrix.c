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
    else
    {
        printf("this is not e zero matrix\n");
    }
    return 0;
}