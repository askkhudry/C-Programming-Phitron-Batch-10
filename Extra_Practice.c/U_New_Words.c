#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    // printf("%s", s);
    int len = strlen(s);
    int egypt[6] = {0};
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            egypt[1]++;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            egypt[2]++;
        }
        else if (s[i] == 'y' || s[i] == 'Y')
        {
            egypt[3]++;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            egypt[4]++;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            egypt[5]++;
        }
    }
    int min = egypt[1];
    for (int i = 1; i <= 5; i++)
    {
        if (min > egypt[i])
        {
            min = egypt[i];
        }
    }
    printf("%d\n", min);
    return 0;
}