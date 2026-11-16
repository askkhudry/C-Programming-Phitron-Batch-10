#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);
    int len = strlen(s);

    int count = 0; // শুরুতে ০ ধরলাম, কারণ প্রথম শব্দ পাওয়ার পর এটি ১ হবে

    for (int i = 0; i < len; i++)
    {
        // বর্তমান ক্যারেক্টারটি যদি অক্ষর হয়
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            // আপনার লজিক: যদি এটি প্রথম অক্ষর হয় অথবা এর আগের ক্যারেক্টারটি স্পেস হয়
            if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '!' || s[i - 1] == ',' || s[i - 1] == '.' || s[i - 1] == '?')
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}