#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int lena = strlen(a), lenb = strlen(b), lenc = lena + lenb;

    char c[lenc + 1];
    for (int i = 0; i < lena; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i <= lenb; i++)
    {
        c[i + lena] = b[i];
    }

    printf("%s", c);

    return 0;
}