#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i == 5)
        {
            continue;//just 5 skip korte
        }
        printf("%d\n", i);
    }

    return 0;
}