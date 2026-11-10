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
    int min_number = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min_number > a[i])
        {
            min_number = a[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_number)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}