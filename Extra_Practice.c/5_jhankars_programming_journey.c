#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max_val < arr[i])
        {
            max_val = arr[i];
        }
        else
        {
            break;
        }
    }
    printf("%lld\n", max_val);

    return 0;
}