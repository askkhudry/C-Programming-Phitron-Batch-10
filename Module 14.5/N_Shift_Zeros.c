#include <stdio.h>
void shift_zero(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shift_zero(a, n);

    return 0;
}

// #include <stdio.h>
// void shift_zero(int a[], int n)
// {
//     int zero_count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//             zero_count++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 0)
//         {
//             printf("%d ", a[i]);
//         }
//     }
//     for (int i = 0; i < zero_count; i++)
//     {
//         printf("0 ");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     shift_zero(a, n);

//     return 0;
// }