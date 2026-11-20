#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_diff = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] - arr[i] > max_diff)
            {
                max_diff = arr[j] - arr[i];
            }
        }
    }
    printf("%d\n", max_diff);
    return 0;
}