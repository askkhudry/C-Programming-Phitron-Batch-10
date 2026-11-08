// jokhon function nijei nijeke call kore kono kaj koriye ney tokhon sei process ta ke recursion bola hoy
#include <stdio.h>
void fun()
{
    printf("hello\n");
    fun(); // ekhane fun funciton nijei nijeke call korteche ejonno fun function ke recursive function bola hoy
}
int main()
{
    printf("hi\n");
    fun();

    return 0;
}