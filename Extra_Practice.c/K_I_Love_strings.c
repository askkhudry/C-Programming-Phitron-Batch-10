#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);
        int lens = strlen(s);
        int lent = strlen(t);
        int len = lens;
        if (lens < lent)
        {
            len = lent;
        }
        for (int i = 0; i < len; i++)
        {
            if (i < lens /*s[i] != '\0'*/)
            {
                printf("%c", s[i]);
            }
            if (i < lent /*t[i] != '\0'*/)
            {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}