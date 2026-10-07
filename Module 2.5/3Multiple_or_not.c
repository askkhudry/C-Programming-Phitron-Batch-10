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
    if (b % a == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}