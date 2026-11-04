#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int a2 = a, b2 = b, c2 = c;

    if (a2 > b2)
    {
        int temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a2 > c2)
    {
        int temp = a2;
        a2 = c2;
        c2 = temp;
    }
    if (b2 > c2)
    {
        int temp = b2;
        b2 = c2;
        c2 = temp;
    }
    printf("%d\n%d\n%d\n", a2, b2, c2);
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}