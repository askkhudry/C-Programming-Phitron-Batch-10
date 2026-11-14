#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int len = strlen(s);
    
    char a[] = "hello";

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == a[j])
        {
            j++;
        }
    }
    if (j == strlen(a))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}