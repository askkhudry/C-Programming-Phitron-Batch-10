#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // ১ থেকে ১০০০ এর মধ্যে থাকা সকল লাকি নম্বরসমূহ
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int is_almost_lucky = 0;

    // সংখ্যাটি কোনো লাকি নম্বর দ্বারা বিভাজ্য কিনা তা চেক করা
    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            is_almost_lucky = 1;
            break;
        }
    }

    if (is_almost_lucky == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

// #include <stdio.h>
// void fun(int val)
// {
//     if (val == 0)
//     {
//         printf("YES\n");
//         return;
//     }
//     if (val != 4 && val != 7)
//     {
//         printf("NO\n");
//     }
//     else
//     {
//         fun(val /= 10);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int digit = n % 10;
//     int val = n / 10;
//     if (n % 4 == 0 || n % 7 == 0)
//     {
//         printf("YES\n");
//     }
//     else if (digit == 4 || digit == 7)
//     {
//         fun(val);
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }