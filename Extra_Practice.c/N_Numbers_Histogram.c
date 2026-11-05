#include <stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}