#include <stdio.h>
void fun()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char c;
        scanf("%d %c", &n, &c);
        for (int i = 1; i <= n; i++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
}
int main()
{
    fun();

    return 0;
}