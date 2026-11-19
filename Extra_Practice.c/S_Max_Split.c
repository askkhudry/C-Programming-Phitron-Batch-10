#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);
    int countL = 0;
    int countR = 0;

    // int count_string = 0;
    // for (int i = 0; i < len - 1; i++)
    // {
    //     if (s[i] != s[i + 1])
    //     {
    //         count_string++;
    //     }
    // }
    // printf("%d\n", (count_string + 1) / 2);

    // int count_stringL = 0;
    // int count_stringR = 0;
    // for (int i = 0; i < len - 1; i++)
    // {
    //     if (s[i] == 'L' && s[i + 1] == 'R')
    //     {
    //         count_stringL++;
    //     }
    //     if (s[i] == 'R' && s[i + 1] == 'L')
    //     {
    //         count_stringR++;
    //     }
    // }
    // if (s[0] == 'L')
    //     printf("%d\n", count_stringL);
    // else
    //     printf("%d\n", count_stringR);

    int count_string = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'L')
        {
            countL++;
        }
        else if (s[i] == 'R')
        {
            countR++;
        }
        if (countL == countR)
        {
            count_string++;
            countL = 0;
            countR = 0;
        }
    }
    printf("%d\n", count_string);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'L')
        {
            countL++;
            printf("%c", s[i]);
        }
        else if (s[i] == 'R')
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