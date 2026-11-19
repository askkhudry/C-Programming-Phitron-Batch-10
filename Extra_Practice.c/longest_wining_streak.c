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
    int count = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
        if (count < cnt)
        {
            count = cnt;
        }
        if (a[i] == 0)
        {
            cnt = 0;
        }
    }
    if (count > 0)
    {
        printf("%d", count);
    }
    else
    {
        printf("0");
    }
    return 0;
}