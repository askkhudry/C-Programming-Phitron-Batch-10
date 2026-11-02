#include <stdio.h>

int x; // global variable

int sum()
{
    printf("sum -> %d", x);
}
int main()
{
    scanf("%d", &x);
    printf("main -> %d\n", x);
    sum();
    return 0;
}