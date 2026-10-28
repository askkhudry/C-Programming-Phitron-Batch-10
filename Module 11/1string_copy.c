#include <stdio.h>
#include <string.h>
int main()
{

    char s[10];
    char d[10];
    scanf("%s %s", s, d);

    // manualy copy korar niom
    //  int lend = strlen(d);

    // for (int i = 0; i <= lend; i++)
    // {
    //     s[i] = d[i];
    // }

    // printf("%s %s", s, d);

    // builtin function
    strcpy(s, d);
    printf("%s %s", s, d);
    return 0;
}