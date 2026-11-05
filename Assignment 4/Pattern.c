#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = (2 * n) - 1 - 2; j >= (2 * i) - 1; j--)
        {
            if (n % 2 == 0)
            {
                if (i % 2 == 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
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

//     int star = 1;
//     int space = n - 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("-");
//             }
//             else
//             {
//                 printf("#");
//             }
//         }
//         printf("\n");
//         star += 2;
//         space--;
//     }

//     int star2 = (2 * n) - 1 - 2;
//     int space2 = 1;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int j = 1; j <= space2; j++)
//         {
//             printf(" ");
//         }
//         for (int j = star2; j >= 1; j--)
//         {
//             if (n % 2 == 0)
//             {
//                 if (i % 2 == 0)
//                 {
//                     printf("-");
//                 }
//                 else
//                 {
//                     printf("#");
//                 }
//             }
//             else
//             {
//                 if (i % 2 == 0)
//                 {
//                     printf("#");
//                 }
//                 else
//                 {
//                     printf("-");
//                 }
//             }
//         }
//         printf("\n");
//         star2 -= 2;
//         space2++;
//     }

//     return 0;
// }

