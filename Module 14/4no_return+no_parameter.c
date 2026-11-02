#include <stdio.h>

void sumation()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("%d", sum);
    return;
}

int main()
{
    sumation();
    return 0;
}