#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n * 4; j++)
    {
        if (j % 4 == 0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%d ", j);
        }
    }

    return 0;
}