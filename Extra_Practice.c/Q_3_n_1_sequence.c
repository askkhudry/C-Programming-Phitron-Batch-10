#include <stdio.h>
void fun(int n, int length)
{
    if (n == 1)
    {
        printf("%d\n", length);
        return;
    }
    if (n % 2 == 0)
    {
        n /= 2;
        length++;
    }
    else if (n % 2 != 0)
    {
        n = (3 * n) + 1;
        length++;
    }
    fun(n, length);
}
int main()
{
    int n;
    scanf("%d", &n);
    int length = 1;
    fun(n, length);

    return 0;
}