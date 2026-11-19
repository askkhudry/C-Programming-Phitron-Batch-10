#include <stdio.h>
#include <string.h>
int main()
{
    int q;
    scanf("%d", &q);
    char s[100005];
    scanf("%s", s);
    // printf("%s", s);
    int len = strlen(s);
    char Original[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int len_Original = strlen(Original);

    char Key[63] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    int len_Key = strlen(Key);

    if (q == 1)
    {
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len_Original; j++)
            {
                if (s[i] == Original[j])
                {
                    printf("%c", Key[j]);
                    break;
                }
            }
        }
    }
    else if (q == 2)
    {
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len_Key; j++)
            {
                if (s[i] == Key[j])
                {
                    printf("%c", Original[j]);
                    break;
                }
            }
        }
    }

    return 0;
}