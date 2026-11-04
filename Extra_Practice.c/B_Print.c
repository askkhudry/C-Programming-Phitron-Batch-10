#include <stdio.h>
void fun()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d", n);
}
int main()
{
    fun();

    return 0;
}