#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
    double r;
    scanf("%lf", &r);

    double pi = 3.141592653;

    double area = pi * r * r;

    printf("%.9lf\n", area);

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     double a;
//     scanf("%lf", &a);
//     double b = 3.141592653;
//     double mul = b * a * a;
//     printf("%.9f", mul);
//     return 0;
// }