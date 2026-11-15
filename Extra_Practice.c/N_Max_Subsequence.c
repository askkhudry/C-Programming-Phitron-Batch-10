#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}