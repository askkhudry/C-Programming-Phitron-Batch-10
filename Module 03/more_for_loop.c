#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    // natural ba savabik songkha print
    for (int i = 1; i <= a; i = i + 1)
    {
        printf("%d\n", i);
    }

    // bijor ba odd number print
    for (int i = 1; i <= a; i = i + 2)
    {
        printf("%d\n", i);
    }

    // jor ba even number print
    for (int i = 2; i <= a; i = i + 2)
    {
        printf("%d\n", i);
    }

    // 5 er gunitok gulo likhbo
    for (int i = 5; i <= a; i = i + 5)
    {
        printf("%d\n", i);
    }

    // ulta print
    for (int i = a; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    // gun kore ba double akare
    for (int i = 2; i <= a; i = i * 2)
    {
        printf("%d\n", i);
    }
    return 0;
}