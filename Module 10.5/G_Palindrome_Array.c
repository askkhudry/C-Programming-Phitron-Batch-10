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

    int i = 0;
    int j = n - 1;

    int IsPalindrome = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            IsPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (IsPalindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}