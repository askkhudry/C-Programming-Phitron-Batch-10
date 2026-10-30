#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float c = (float)a / b;

    int floorr = floor(c);
    int ceill = ceil(c);
    int roundd = round(c);

    printf("floor %d / %d = %d\n", a, b, floorr);
    printf("ceil %d / %d = %d\n", a, b, ceill);
    printf("round %d / %d = %d\n", a, b, roundd);

    return 0;
}