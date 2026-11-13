#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int upper_line = 5 + ((n + 1) / 2);
    int upper_space = upper_line - 1;

    for (int i = 1; i <= upper_line; i++)
    {
        for (int j = 1; j <= upper_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        upper_space--;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int possible_n[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

    int serial_n;
    for (int i = 0; i < 11; i++)
    {
        if (possible_n[i] == n)
        {
            serial_n = i;
        }
    }

    int upper_line = 6 + serial_n;
    int upper_star = 1;
    int upper_space = upper_line - 1;
    for (int i = 1; i <= upper_line; i++)
    {
        for (int j = 1; j <= upper_space; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= upper_star; i++)
        {
            printf("*");
        }
        upper_space--;
        upper_star += 2;
        printf("\n");
    }

    int lower_line = 5;
    // int total_width = 1 + 2 * (upper_line - 1);
    //  int lower_space = (total_width - n) / 2;
    int lower_space = 5;
    int lower_star = n;
    for (int i = 1; i <= lower_line; i++)
    {
        for (int j = 1; j <= lower_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= lower_star; j++)
        {
            printf("*");
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

//     // ১. ওপরের ত্রিভুজাকার পাতার অংশ প্রিন্ট করা
//     int total_lines = 5 + (n + 1) / 2;

//     for (int i = 1; i <= total_lines; i++)
//     {
//         // স্পেস প্রিন্ট করার লুপ
//         for (int j = 1; j <= total_lines - i; j++)
//         {
//             printf(" ");
//         }
//         // স্টার প্রিন্ট করার লুপ (প্রতি লাইনে স্টার বাড়ার নিয়ম: 1, 3, 5, 7...)
//         for (int j = 1; j <= (2 * i - 1); j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // ২. নিচের কান্ড (Stem) অংশ প্রিন্ট করা (সবসময় ৫ লাইন)
//     for (int i = 1; i <= 5; i++)
//     {
//         // কান্ডের আগে সবসময় ৫টি স্পেস হবে
//         for (int j = 1; j <= 5; j++)
//         {
//             printf(" ");
//         }
//         // n সংখ্যক স্টার প্রিন্ট হবে
//         for (int j = 1; j <= n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }