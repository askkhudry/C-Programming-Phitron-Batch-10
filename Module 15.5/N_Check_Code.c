#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    char s[a + b + 2];
    scanf("%s", s);
    // printf("%s\n", s);
    // printf("%c", s[a]);
    int flag = 1;
    if (s[a] == '-')
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (i == a)
            {
                continue;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                flag++;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            printf("No");
        }
        else
        {
            printf("Yes");
        }
    }
    else
    {
        printf("No");
    }

    return 0;
}