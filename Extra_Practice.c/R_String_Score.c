#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[2 * n + 1];
    scanf("%s", s);

    int len = strlen(s);
    // printf("%d", len);
    int scor = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'V')
        {
            scor += 5;
        }
        else if (s[i] == 'W')
        {
            scor += 2;
        }
        else if (s[i] == 'X' && i != len - 1)
        {
            i++;
        }
        else if (s[i] == 'Y' && i != len - 1)
        {
            // char temp = s[i + 1];
            // for (int j = i + 1; j < len - 1; j++)
            // {
            //     s[j] = s[j + 1];
            // }
            // s[len - 1] = temp;

            s[len] = s[i + 1];
            len++;
            s[len] = '\0';
            i++;
        }
        else if (s[i] == 'Z' && i != len - 1)
        {
            if (s[i + 1] == 'V')
            {
                scor /= 5;
                i++;
            }
            else if (s[i + 1] == 'W')
            {
                scor /= 2;
                i++;
            }
        }
    }
    // printf("%s", s);
    printf("%d\n", scor);

    return 0;
}