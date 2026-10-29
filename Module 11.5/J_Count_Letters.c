#include <stdio.h>
char s[10000001];
int main()
{
    scanf("%s", s);
    int fre[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        fre[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }

    return 0;
}