#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);

    float suppos = (float)100 - x;
    float percent = suppos / 100;

    float main_prize = p / percent;

    printf("%.2f", main_prize);
    return 0;
}