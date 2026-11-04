#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a); // a er value print hocche

    printf("%p\n", &a); // a er address print hocche

    // pointer variable creat
    int *ptr; // ptr name e ekta address store korar jonno variable nilam

    ptr = &a; // ptr variable e a er address rakhtechi

    printf("%p\n", ptr); // ptr variable e jei address ta rakhchi seta print kortechi
    // address print korar jonno %p dite hoy

    printf("%p\n", &ptr); // ptr er address ta abar print kore dekhlam

    return 0;
}