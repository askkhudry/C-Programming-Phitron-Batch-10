#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int count = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        if (a[i] == b[j])
        {
            count++;
            j++;
        }
    }
    if (count == m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}