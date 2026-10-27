#include <stdio.h>
int main()
{
    int a;
    long long int b;
    char c;
    float d;
    double f;
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &f);
    printf("%d\n%lld\n%c\n%.2f\n%.1f", a, b, c, d, f);

    return 0;
}