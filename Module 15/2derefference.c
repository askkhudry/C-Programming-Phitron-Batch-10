#include <stdio.h>
int main()
{
    int a = 100;
    printf("%d\n", a);

    int *ptr;
    ptr = &a;

    printf("%d\n", *ptr); // ekhane defference kore a er man print koryechi, *ptr dara bujhay ptr jei address ta point korteche ba store korteche sei address er value ta print korbo

    *ptr = 200; // ekhane derefference kore a er man change kortechi, *ptr dara bujhay ptr jei address ta store korteche sei address e giye address e jei value ta ache seta 200 kore dao;
    printf("%d\n", a);

    return 0;
}