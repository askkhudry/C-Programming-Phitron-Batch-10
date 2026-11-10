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

    int index_min = 0;
    int min_val = a[0];
    int index_max = 0;
    int max_val = a[0];

    for (int i = 1; i < n; i++)
    {
        if (min_val > a[i])
        {
            min_val = a[i];
            index_min = i;
        }
        if (max_val < a[i])
        {
            max_val = a[i];
            index_max = i;
        }
    }

    int temp = a[index_min];
    a[index_min] = a[index_max];
    a[index_max] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}