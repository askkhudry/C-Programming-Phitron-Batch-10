#include <stdio.h>
#include <math.h>
int main()
{
    int ceill = ceil(4.4);
    int floorr = floor(4.4);
    int roundd = round(4.4);
    int roundd2 = round(4.6);

    printf("%d %d %d %d\n", ceill, floorr, roundd, roundd2);

    int sqrtt = sqrt(4);
    int power = pow(2, 3);
    int abss = abs(-10);

    printf("%d %d %d", sqrtt, power, abss);
    return 0;
}