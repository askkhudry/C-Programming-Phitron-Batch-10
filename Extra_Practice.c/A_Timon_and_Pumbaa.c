#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int val = a - b;
    if (val >= 0)
    {
        printf("%d", val);
    }
    else
    {
        printf("0");
    }

    return 0;
}