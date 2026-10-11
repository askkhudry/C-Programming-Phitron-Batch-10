#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);

    char s[101];
    scanf("%s", &s);
    printf("%s\n", s);

    char sen[101];
    scanf(" %100[^\n]", sen);
    printf("%s\n", sen);

    return 0;
}