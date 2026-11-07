#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long count = 0;
    while (n--)
    {
        long long x;
        scanf("%lld", &x);
        long long temp = 0;
        while (x % 2 == 0)
        {
            temp++;
            x /= 2;
        }
        if (count < temp)
        {
            count = temp;
        }
    }
    printf("%lld", count);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     long long max_count = 0;
    
//     while (n--) {
//         long long x;
//         scanf("%lld", &x);
        
//         // __builtin_ctzll একটি বিল্ট-ইন ফাংশন যা x-কে ২ দিয়ে কতবার ভাগ করা যায় তা রিটার্ন করে
//         long long temp = __builtin_ctzll(x); 
        
//         if (temp > max_count) {
//             max_count = temp;
//         }
//     }
    
//     printf("%lld\n", max_count);
//     return 0;
// }