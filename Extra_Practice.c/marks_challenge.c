#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
    {
        printf("FAIL\n");
    }
    else
    {
        printf("PASS\n");
    }

    return 0;
}