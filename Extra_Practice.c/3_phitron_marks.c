#include <stdio.h>
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int score;
        scanf("%d", &score);
        sum += score;
    }

    int needed = (n * k) - sum;

    if (needed > m)
    {
        printf("-1\n");
    }
    else if (needed < 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", needed);
    }
    return 0;
}