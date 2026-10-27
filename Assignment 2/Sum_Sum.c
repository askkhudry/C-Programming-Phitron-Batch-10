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

    long long pos_sum = 0;
    long long neg_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pos_sum += a[i];
        }
        else
        {
            neg_sum += a[i];
        }
    }

    printf("%lld %lld", pos_sum, neg_sum);

    return 0;
}