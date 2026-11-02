#include <stdio.h>

int sumation()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = x + y;
    return sum;
}

int subtraction()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sub = a - b;
    return sub;
}

int main()
{
    int sum = sumation();
    int sub = subtraction();
    printf("%d %d", sum, sub);
    return 0;
}