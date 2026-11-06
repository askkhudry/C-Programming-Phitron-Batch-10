#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int min = INT_MAX;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        if (min > a)
        {
            min = a;
        }
        count++;
        if (count == k)
        {
            printf("%d ", min);
            count = 0;
            min = INT_MAX;
        }
        else if (i == n)
        {
            printf("%d ", min);
        }
    }
    return 0;
}