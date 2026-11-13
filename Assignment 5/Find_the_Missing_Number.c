#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long mul = a * b * c;
        long long missing = m / mul;
        if (m % mul == 0)
        {
            printf("%lld\n", missing);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         long long m, a, b, c;
//         scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

//         long long mul = a * b * c;

//         // mul শূন্য হলে অথবা m, mul দ্বারা নিঃশেষে বিভাজ্য না হলে -1 প্রিন্ট করবে
//         if (mul == 0 || m % mul != 0) {
//             printf("-1\n");
//         } else {
//             long long missing = m / mul;
//             printf("%lld\n", missing);
//         }
//     }
//     return 0;
// }

