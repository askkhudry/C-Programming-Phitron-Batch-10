#include <stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    int sum = a + b;
    printf("summation = %d\n", sum);
    int sub = a - b;
    printf("subtraction = %d\n", sub);
    int mul = a * b;
    printf("multiplication = %d\n", mul);
    int div = a / b;
    printf("divition = %d\n", div);
    float c = 15;
    int d = 2;
    float divi = c / d;
    printf("divition = %f\n", divi);
    int rem = a % 3;
    printf("remainder = %d", rem);

    return 0;
}