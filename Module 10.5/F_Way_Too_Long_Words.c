#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", &s);
        int length = strlen(s);
        if (length <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], length - 2, s[length - 1]);
        }
    }

    return 0;
}