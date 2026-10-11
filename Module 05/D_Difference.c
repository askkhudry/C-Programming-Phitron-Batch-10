#include <stdio.h>
int main()
{
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long ab = A * B;
    long long cd = C * D;

    printf("Difference = %lld", ab - cd);
    return 0;
}