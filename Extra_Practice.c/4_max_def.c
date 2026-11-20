#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_diff = a[1] - a[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] > max_diff)
            {
                max_diff = a[j] - a[i];
            }
        }
    }

    printf("%d\n", max_diff);

    return 0;
}