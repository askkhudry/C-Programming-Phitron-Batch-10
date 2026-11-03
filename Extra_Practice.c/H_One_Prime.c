#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int prime = 1;

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}