//eita just c++ diye submit dite hobe etei submit accepted hobe
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, s;
        scanf("%lld %lld", &n, &s);

        long long possible_sum = (n * (n + 1)) / 2;

        if (possible_sum >= s)
        {
            if (n >= s)
            {
                printf("%lld", s);
            }
            else
            {
                long long number = n;
                while (s > 0)
                {
                    if (number <= s)
                    {
                        printf("%lld ", number);
                        s -= number;
                    }
                    number--;
                }
            }
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         long long n, s;
//         scanf("%lld %lld", &n, &s);

//         long long possible_sum = (n * (n + 1)) / 2;

//         if (s > possible_sum)
//         {
//             printf("-1\n");
//             continue;
//         }

//         for (int i = n; i >= 1; i--)
//         {
//             if (s >= i)
//             {
//                 printf("%d ", i);
//                 s -= i;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long n, s;
//         scanf("%lld %lld", &n, &s);
//         long long possible_sum = (n * (n + 1)) / 2;
//         if (possible_sum >= s)
//         {
//             if (n >= s)
//             {
//                 printf("%lld", s);
//             }
//             else
//             {
//                 // long long number = n;
//                 // while (s > 0)
//                 // {
//                 //     if (number <= s)
//                 //     {
//                 //         printf("%lld ", number);
//                 //         s -= number;
//                 //     }
//                 //     number--;
//                 // }
//                 // for (long long i = n; i >= 1 && s > 0; i--)
//                 // {
//                 //     if (i <= s)
//                 //     {
//                 //         printf("%lld ", i);
//                 //         s -= i;
//                 //     }
//                 // }
//                 long long rem = s - n;
//                 if (rem <= n)
//                 {
//                     printf("%lld %lld\n", n, rem);
//                 }
//                 else
//                 {
//                     long long rem1 = rem - n;
//                     if (rem1 <= n)
//                     {
//                         printf("%lld %lld %lld\n", n, rem);
//                     }
//                     // যদি rem এখনো n এর চেয়ে বড় হয়
//                     // এভাবে সর্বোচ্চ ২-৩ টি ধাপে লুপ ছাড়া মান বের করা যায়
//                 }
//             }
//         }
//         else
//         {
//             printf("-1");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long n, s;
//         scanf("%lld %lld", &n, &s);
//         long long possible_sum = (n * (n + 1)) / 2;
//         if (possible_sum >= s)
//         {
//             long long current_num = n;
//             while (s > 0)
//             {
//                 if (s >= current_num)
//                 {
//                     printf("%lld ", current_num);
//                     s -= current_num;
//                 }
//                 else
//                 {
//                     printf("%lld", s);
//                     s = 0;
//                 }
//                 current_num--;
//             }
//         }
//         else
//         {
//             printf("-1");
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, s;
        scanf("%lld %lld", &n, &s);

        long long max_sum = (n * (n + 1)) / 2;

        // যদি সর্বোচ্চ সম্ভব যোগফল থেকেও s বড় হয়, তবে -1 প্রিন্ট হবে
        if (max_sum < s) {
            printf("-1\n");
            continue;
        }

        // বড় সংখ্যাগুলো থেকে শুরু করে যোগ করতে হবে
        long long current = n;
        int first = 1; // স্পেস প্রিন্ট করার সুবিধার জন্য

        while (s > 0) {
            if (s >= current) {
                if (!first) printf(" ");
                printf("%lld", current);
                s -= current;
                first = 0;
            }
            current--;
        }
        printf("\n");
    }
    return 0;
}*/

// // if (n < s)
// // {
// //     long long sum = s - n;
// //     printf("%lld %lld", n, sum);
// // }
// // else if (n == s)
// // {
// //     printf("%lld %lld", n - 1, 1);
// // }
// // else
// // {
// //     printf("%lld %lld", s - 1, 1);
// // }

// /*
// if (n > s)
// {
//     printf("%lld %d", s - 1, 1);
// }
// else if (n == s)
// {
//     printf("%lld %d", n - 1, 1);
// }
// else
// {
//     int sum = n;
//     if (sum <= s)
//     {
//         for (int i = n - 1; i >= 1; i--)
//         {
//             if (sum <= s)
//             {
//                 sum += i;
//                 printf("%d ", i);
//             }
//         }
//     }
// }
// */