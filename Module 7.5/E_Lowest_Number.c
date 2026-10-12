#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int low = a[1];
    int pos = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < low)
        {
            low = a[i];
            pos = i;
        }
    }
    printf("%d %d", low, pos);

    return 0;
}