#include <stdio.h>
long long fun(int a[], int n, int index)
{
    if (index == n)
    {
        return 0LL;
    }
    long long sum = a[index] + fun(a, n, index + 1);
    return sum;
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

    int index = 0;
    long long sum = fun(a, n, index);
    double avarage = (double)sum / n;
    printf("%.6f\n", avarage);

    return 0;
}