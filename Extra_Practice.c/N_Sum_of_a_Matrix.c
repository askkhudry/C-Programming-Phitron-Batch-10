////My approch
// #include <stdio.h>
// void fun(int r, int c, int a[r][c], int b[r][c], int row)
// {
//     if (row == r)
//     {
//         return;
//     }
//     for (int i = 0; i < c; i++)
//     {
//         printf("%d ", a[row][i] + b[row][i]);
//     }
//     printf("\n");
//     fun(r, c, a, b, row + 1);
// }
// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int b[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     // for (int i = 0; i < r; i++)
//     // {
//     //     for (int j = 0; j < c; j++)
//     //     {
//     //         printf("%d ", a[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     // for (int i = 0; i < r; i++)
//     // {
//     //     for (int j = 0; j < c; j++)
//     //     {
//     //         printf("%d ", b[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     int row = 0;
//     fun(r, c, a, b, row);

//     return 0;
// }

// right approch
#include <stdio.h>

void fun(int r, int c, int a[100][100], int b[100][100], int row, int col)
{
    // বেস কেস: যদি রো শেষ হয়ে যায়, থেমে যাব
    if (row == r)
    {
        return;
    }

    // একটি এলপার প্রিন্ট করা
    printf("%d ", a[row][col] + b[row][col]);

    // যদি বর্তমান রো-র সব কলাম শেষ হয়ে যায়, তবে পরের রো-তে যাব এবং কলাম আবার ০ থেকে শুরু করব
    if (col == c - 1)
    {
        printf("\n");
        fun(r, c, a, b, row + 1, 0);
    }
    else
    {
        // একই রো-তে পরের কলামে যাব
        fun(r, c, a, b, row, col + 1);
    }
}

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100], b[100][100];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // row = 0 এবং col = 0 থেকে রিকার্শন শুরু করলাম
    fun(r, c, a, b, 0, 0);

    return 0;
}