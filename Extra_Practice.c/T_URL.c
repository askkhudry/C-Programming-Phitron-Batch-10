#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    // printf("%s", s);
    int len = strlen(s);
    int last;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '?')
        {
            last = i;
            break;
        }
    }
    for (int i = last + 1; i < len; i++)
    {
        if (s[i] == '&')
        {
            printf("\n");
            continue;
        }
        if (s[i] == '=')
        {
            printf(": ");
            continue;
        }
        printf("%c", s[i]);
    }
    // printf("%d\n", last);
    // printf("%c\n", s[last + 1]);
    return 0;
}