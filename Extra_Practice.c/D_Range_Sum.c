#include <stdio.h>
int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long l, r;
        scanf("%lld %lld", &l, &r);
        if (l > r)
        {
            long long temp = l;
            l = r;
            r = temp;
        }
        long long sum = 0;
        long long number = (r - l) + 1;
        long long pair_sum = l + r;
        long long pair_num = number / 2;
        long long middle_num = pair_sum / 2;
        if (number % 2 == 0)
        {
            sum = (pair_sum * pair_num);
        }
        else
        {
            sum = (pair_sum * pair_num) + middle_num;
        }
        printf("%lld\n", sum);
    }
    return 0;
}