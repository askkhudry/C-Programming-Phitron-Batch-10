#include <stdio.h>
#include <string.h>
int main()
{
    char f1[1001], s1[1001];
    scanf("%s %s", f1, s1);

    char f2[1001], s2[1001];
    scanf("%s %s", f2, s2);

    // printf("%s %s\n", f1, s1);
    // printf("%s %s", f2, s2);
    int val = strcmp(s1, s2);
    if (val == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}