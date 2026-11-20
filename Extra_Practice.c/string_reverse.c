#include <stdio.h>
#include <string.h>
int main()
{
    char s[105];
    scanf("%s", s);
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        printf("%c", s[i]);
    }

    return 0;
}