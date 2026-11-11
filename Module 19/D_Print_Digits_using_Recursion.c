#include <stdio.h>
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    int last_digit = n % 10;
    n /= 10;
    fun(n);
    printf("%d ", last_digit);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}