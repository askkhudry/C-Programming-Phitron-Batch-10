#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    if (a == b || a == c || a == d || b == c || b == d || c == d)
        printf("Tie\n");
    else if (max == a)
        printf("Rahim\n");
    else if (max == b)
        printf("Karim\n");
    else if (max == c)
        printf("Sakib\n");
    else
        printf("Nabil\n");
    return 0;
}