#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int gcd = 1;
    for (int i = 2; i <= a; i++)
    {
        if (b % i == 0 && a % i == 0)
        {
            gcd = i;
        }
    }
    printf("%d", gcd);

    return 0;
}