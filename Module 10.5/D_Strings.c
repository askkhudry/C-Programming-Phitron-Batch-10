#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s", &a);
    scanf("%s", &b);

    int lenA = strlen(a), lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);

    int lenC = lenA + lenB;
    char c[lenC + 1];
    for (int i = 0; i < lenA; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < lenB; i++)
    {
        c[lenA + i] = b[i];
    }
    c[lenC] = '\0';
    printf("%s\n", c);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);
    return 0;
}