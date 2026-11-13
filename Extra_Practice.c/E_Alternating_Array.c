#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count1 = 0; // +, -, +, - প্যাটার্ন ধরলে
    int count2 = 0; // -, +, -, + প্যাটার্ন ধরলে

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        // প্রথম প্যাটার্ন: জোড় ইনডেক্সে (+), বিজোড় ইনডেক্সে (-)
        if (i % 2 == 0)
        {
            if (x < 0)
                count1++;
        }
        else
        {
            if (x > 0)
                count1++;
        }

        // দ্বিতীয় প্যাটার্ন: জোড় ইনডেক্সে (-), বিজোড় ইনডেক্সে (+)
        if (i % 2 == 0)
        {
            if (x > 0)
                count2++;
        }
        else
        {
            if (x < 0)
                count2++;
        }
    }

    if (count1 < count2)
    {
        printf("%d\n", count1);
    }
    else
    {
        printf("%d\n", count2);
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int count1 = 0;
//     int count2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {

//             if (a[i] < 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 count1++;
//             }
//         }
//         else
//         {
//             if (a[i] > 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 count1++;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             if (a[i] > 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 count2++;
//             }
//         }
//         else
//         {
//             if (a[i] < 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 count2++;
//             }
//         }
//     }

//     // for (int i = 0; i < n - 1; i++)
//     // {
//     //     if (a[i] > 0 && a[i + 1] > 0)
//     //     {
//     //         a[i + 1] *= (-1);
//     //         count1++;
//     //     }
//     //     else if (a[i] < 0 && a[i + 1] < 0)
//     //     {
//     //         a[i + 1] *= (-1);
//     //         count1++;
//     //     }
//     // }

//     if (count1 < count2)
//     {
//         printf("%d\n", count1);
//     }
//     else
//     {
//         printf("%d\n", count2);
//     }
//     return 0;
// }