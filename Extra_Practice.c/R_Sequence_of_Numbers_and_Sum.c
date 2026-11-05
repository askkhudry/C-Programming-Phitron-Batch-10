#include <stdio.h>
int main()
{
    int n, m;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n > m)
        {
            int temp = n;
            n = m;
            m = temp;
        }
        if (n <= 0)
        {
            break;
        }
        int sum = 0;
        for (int i = n; i <= m; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}