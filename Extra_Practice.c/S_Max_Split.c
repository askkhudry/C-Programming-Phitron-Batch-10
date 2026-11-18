#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);
    int countL = 0;
    int countR = 0;
    int count_string = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            count_string++;
        }
    }
    printf("%d\n", (count_string + 1) / 2);
    for (int i = 0; i < len; i++)
    {

        if (s[i] == 'L')
        {
            countL++;
            printf("%c", s[i]);
        }
        if (s[i] == 'R')
        {
            countR++;
            printf("%c", s[i]);
        }
        if (countL == countR)
        {
            countL = 0;
            countR = 0;
            printf("\n");
        }
    }

    return 0;
}