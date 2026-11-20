#include <stdio.h>
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    int avarage = n * k;
    int needed = avarage - sum;

    if (needed <= 0)
    {
        printf("0\n");
    }
    else if (needed > m)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", needed);
    }
    return 0;
}