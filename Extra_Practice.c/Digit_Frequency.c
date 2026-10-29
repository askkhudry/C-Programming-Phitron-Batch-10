#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);

    int fre[10] = {0};

    for (int i = 0; i < len; i++)
    {
        if (s[i] < 'a')
        {
            fre[s[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", fre[i]);
    }

    return 0;
}