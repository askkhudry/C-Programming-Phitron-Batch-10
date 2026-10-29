#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int len = strlen(s);
        int capital = 0, small = 0, digit = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}