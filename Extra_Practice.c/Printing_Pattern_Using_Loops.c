#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m = 2 * n - 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int top = i;
            int left = j;
            int bottom = m - 1 - i;
            int right = m - 1 - j;

            int min = top;
            if (left < min)
                min = left;
            if (bottom < min)
                min = bottom;
            if (right < min)
                min = right;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int m = 2 * n - 1;

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i == 0 || j == 0 || i == m - 1 || j == m - 1)
//             {
//                 printf("%d ", n);
//             }
//             if (i > 0 && i <= m - 2 && j > 0 && j <= m - 2)
//             {
//                 printf("%d ", n - 1);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }