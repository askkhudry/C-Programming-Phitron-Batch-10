#include <stdio.h>

int doublee(int x)
{
    x *= 2;
    return x;
}

int sumation(int x, int y)
{
    int sum = x + y;
    return sum;
}

int subtraction(int x, int y)
{
    int sub = x - y;
    return sub;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int db = doublee(x);
    int sum = sumation(x, y);
    int sub = subtraction(x, y);
    printf("%d %d %d", db, sum, sub);

    return 0;
}