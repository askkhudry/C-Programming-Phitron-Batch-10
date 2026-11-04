#include <stdio.h>
void fun()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (x--)
    {
        for (int i = 0, j = n - 1; i < j; i++)
        {
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    fun();

    return 0;
}
// #include <stdio.h>

// void fun()
// {
//     int n, x;
//     scanf("%d %d", &n, &x);
//     int a[n];
    
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     // x যদি n এর চেয়ে বড় হয়, তবে অতিরিক্ত ঘোরাঘুরি কমানোর জন্য
//     x = x % n;

//     int ans[n];
//     for (int i = 0; i < n; i++)
//     {
//         // প্রতিটি উপাদানকে x ঘর ডানে শিফট করার সূত্র: (i + x) % n
//         ans[(i + x) % n] = a[i];
//     }

//     // ফলাফল প্রিন্ট করা
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ans[i]);
//     }
// }

// int main()
// {
//     fun();
//     return 0;
// }