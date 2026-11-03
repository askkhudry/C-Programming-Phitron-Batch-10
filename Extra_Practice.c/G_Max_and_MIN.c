#include <stdio.h>
int min(int a[], int n)
{
    int minimum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }
    return minimum;
}
int max(int a[], int n)
{
    int maximum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
        }
    }
    return maximum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int minimum = min(a, n);
    int maximum = max(a, n);

    printf("%d %d", minimum, maximum);
    return 0;
}