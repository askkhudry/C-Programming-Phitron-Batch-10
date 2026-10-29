#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int WorkingDays = (m1 * d) / (m1 + m2);
        int dayGone = d - WorkingDays;

        printf("%d\n", dayGone);
    }
    return 0;
}