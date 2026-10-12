#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        int sum = 0;
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}