#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    char fre[n][11];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", fre[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s ", fre[i]);
    }

    return 0;
}