#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int upper_line = 5 + ((n + 1) / 2);
    int upper_space = upper_line - 1;

    for (int i = 1; i <= upper_line; i++)
    {
        for (int j = 1; j <= upper_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        upper_space--;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}