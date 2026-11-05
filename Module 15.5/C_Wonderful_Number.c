#include <stdio.h>

// ১. বাইনারি চেক করার সহজ ফাংশন
int is_palindrome_binary(long long n)
{
    if (n == 0)
        return 1; // ০ এর জন্য

    int binary[32]; // বাইনারি বিটগুলো জমা রাখার জন্য অ্যারে
    int i = 0;

    // সংখ্যাটিকে বাইনারিতে রূপান্তর করে অ্যারেতে রাখা
    while (n > 0)
    {
        binary[i] = n % 2; // ২ দিয়ে ভাগ করে ভাগশেষ (0 বা 1) রাখা
        n /= 2;
        i++;
    }

    // এখন চেক করব বাইনারি অ্যারেটি প্যালিনড্রোম কি না (সামনে ও পেছন থেকে মিলছে কি না)
    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        if (binary[start] != binary[end])
        {
            return 0; // মিল না পেলে প্যালিনড্রোম না (0 রিটার্ন করবে)
        }
        start++;
        end--;
    }

    return 1; // মিলে গেলে প্যালিনড্রোম (1 রিটার্ন করবে)
}

// ২. মূল শর্ত চেক করার ফাংশন
void check_wonderful(long long n)
{
    // শর্ত: বিজোড় হতে হবে এবং বাইনারি প্যালিনড্রোম হতে হবে
    if (n % 2 != 0 && is_palindrome_binary(n))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    long long n;
    if (scanf("%lld", &n) == 1)
    {
        check_wonderful(n);
    }
    return 0;
}