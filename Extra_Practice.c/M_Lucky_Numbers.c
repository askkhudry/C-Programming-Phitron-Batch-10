#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int lucky = 0;
    for (int i = a; i <= b; i++)
    {
        int num = i;
        int flag = 1;
        while (num != 0)
        {
            int last_digit = num % 10;
            num /= 10;
            if (last_digit == 4 || last_digit == 7)
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            lucky = 1;
            printf("%d ", i);
        }
    }
    if (lucky == 0)
    {
        printf("-1");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int found = 0;

//     for (int i = a; i <= b; i++) {
//         int temp = i;
//         int is_lucky = 1;

//         // কোনো সংখ্যা লাকি কি না তা চেক করার লুপ
//         while (temp > 0) {
//             int digit = temp % 10;
//             if (digit != 4 && digit != 7) {
//                 is_lucky = 0; // যদি ৪ বা ৭ বাদে অন্য কিছু থাকে
//                 break;
//             }
//             temp /= 10;
//         }

//         // যদি লাকি হয়, তবে প্রিন্ট করবে
//         if (is_lucky) {
//             printf("%d ", i);
//             found = 1;
//         }
//     }

//     // যদি একটাও লাকি নাম্বার না পাওয়া যায়
//     if (!found) {
//         printf("-1");
//     }

//     return 0;
// }