#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ev = 0, od = 0, pos = 0, neg = 0;
    while (N--)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            ev++;
        }
        else
        {
            od++;
        }
        if (a > 0)
        {
            pos++;
        }
        else if (a < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\n", ev);
    printf("Odd: %d\n", od);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}