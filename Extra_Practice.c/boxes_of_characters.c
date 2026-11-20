#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1001];
        scanf("%s", s);
        int len = strlen(s);
        int consonants = 0;
        int vowels = 0;
        int digit = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowels++;
            }
            else if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] > '9')
            {
                consonants++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }
        consonants = ceil((float)consonants / 3);
        vowels = ceil((float)vowels / 2);
        digit = ceil((float)digit / 1);

        int val = consonants;
        if (val < vowels)
        {
            val = vowels;
        }
        if (val < digit)
        {
            val = digit;
        }
        printf("%d\n", val);
    }
    return 0;
}