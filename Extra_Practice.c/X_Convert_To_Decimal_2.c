#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);

        int count = __builtin_popcountll(n); // n er binary te koyti ek ache seta ber korte builtin popcount function use kora hoy

        long long ans = (1LL << count) - 1; // যতগুলো 1 আছে, ততোটি 1 দিয়ে গঠিত বাইনারি সংখ্যার ডেসিমেল মান: (2^count - 1)

        printf("%lld\n", ans);
    }

    return 0;
}