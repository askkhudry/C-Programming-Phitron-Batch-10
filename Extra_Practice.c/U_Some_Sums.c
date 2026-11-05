#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int ans_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int digit_sum = 0;
        int val = i;
        while (val > 0)
        {
            int digit = val % 10;
            digit_sum += digit;
            val /= 10;
        }
        if (a <= digit_sum && digit_sum <= b)
        {
            ans_sum += i;
        }
    }
    printf("%d", ans_sum);

    return 0;
}