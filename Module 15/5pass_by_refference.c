#include <stdio.h>

void fun(int *a) // a er address recieve korar jonno a namer ekta pointer variable nicchi
{
    printf("%p\n", a); // ekhane dekhbo je main function er a er addres ta ei fun function er pointer variable a te chole asche

    *a = 20; // ekhane boltechi je pointer a jei address ta store korteche sei address e jao giye sei value ta 20 kore dao, orthat ekhane derefference kora hocche
}

int main()
{
    int a = 10;

    fun(&a); // a er address pathacchi

    printf("%d\n", a); // a er valu change hoye jabe karon fun function e valu change kora hoiche

    printf("%p\n", &a); // main function er a er address

    return 0;
}