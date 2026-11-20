#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int val = a;
    if (val < b)
    {
        val = b;
    }
    if (val < c)
    {
        val = c;
    }
    if (val < d)
    {
        val = d;
    }

    int count = 0;
    if (a == val)
        count++;
    if (b == val)
        count++;
    if (c == val)
        count++;
    if (d == val)
        count++;

    if (count > 1)
    {
        printf("Tie\n");
    }
    else if (a == val)
    {
        printf("Rahim\n");
    }
    else if (b == val)
    {
        printf("Karim\n");
    }
    else if (c == val)
    {
        printf("Sakib\n");
    }
    else
    {
        printf("Nabil\n");
    }
    return 0;
}