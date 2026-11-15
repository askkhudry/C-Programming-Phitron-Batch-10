#include <stdio.h>

void fun(int n, int index, int space, int star)
{
    if (index == n + 1)
    {
        return;
    }
    for (int j = 1; j <= space; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= star; j++)
    {
        printf("*");
    }
    printf("\n");
    fun(n, index + 1, space - 1, star + 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star = 1;
    fun(n, 1, space, star);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2 * i) - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}