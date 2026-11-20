#include <stdio.h>
void fun(int wrappers, int sum)
{
    if (wrappers < 3)
    {
        printf("%d", sum);
        return;
    }
    sum = sum + (wrappers / 3);
    wrappers = (wrappers / 3) + (wrappers % 3);
    fun(wrappers, sum);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int chocolate = n / 5;

        int sum = chocolate;
        fun(chocolate, sum);
        printf("\n");
        // while (chocolate >= 3)
        // {
        //     sum = sum + (chocolate / 3);
        //     chocolate /= 3;
        // }
        // printf("%d\n", sum);
    }

    return 0;
}