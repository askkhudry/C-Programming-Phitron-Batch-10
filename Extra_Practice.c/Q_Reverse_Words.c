#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);

    int len = strlen(s);
    // fgets এর কারণে শেষে যে \n আসে, তা সরিয়ে দেওয়া
    if (len > 0 && s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    int initial = 0;
    for (int i = 0; i <= len; i++)
    {
        // যখন স্পেস পাবো অথবা স্ট্রিংয়ের শেষ (null) পাবো
        if (s[i] == ' ' || s[i] == '\0')
        {
            // যদি initial এবং i সমান না হয় (অর্থাৎ ফাঁকা শব্দ বা অতিরিক্ত স্পেস না হয়)
            if (initial != i)
            {
                for (int k = i - 1; k >= initial; k--)
                {
                    printf("%c", s[k]);
                }

                // যদি এটি শেষ শব্দ না হয়, তবে মাঝে একটি স্পেস প্রিন্ট করবে
                if (s[i] == ' ')
                {
                    printf(" ");
                }
            }
            initial = i + 1;
        }
    }
    printf("\n");

    return 0;
}