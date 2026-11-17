#include <stdio.h>
void fun(int n, int index, int space, int star)
{
    if (index == n + 1)
    {
        return;
    }
    fun(n, index + 1, space - 1, star + 2);
    for (int i = 1; i <= space; i++)
    {
        printf(" ");
    }
    for (int i = 1; i <= star; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    int index = 1;
    int space = n - 1;
    int star = 1;
    fun(n, index, space, star);

    return 0;
}