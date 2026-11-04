#include <stdio.h>

void fun(int a)
{
    printf("fun function er a1 = %d\n", a);
    printf("fun function er a1 er address = %p\n", &a);
    a = 20;
    printf("fun function er a2 = %d\n", a);
    printf("fun function er a2 er address = %p\n", &a);
}

int main()
{
    int a = 10;
    fun(a); // ekhane amra fun function e just value pathacchi

    printf("main function er a = %d\n", a);
    // shudhu value pathanor karone fun function e je value change korchi seta main function e change hoy nai
    printf("main function er a er address = %p\n", &a);
    // jehetu fun function er a and main function er a alada tai tader address vinno asche, ar etai holo pass by valu
    return 0;
}