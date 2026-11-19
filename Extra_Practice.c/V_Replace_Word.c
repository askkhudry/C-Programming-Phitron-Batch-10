#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    scanf("%s", s);
    // printf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            printf(" ");
            i += 4;
            continue;
        }
        printf("%c", s[i]);
    }

    return 0;
}