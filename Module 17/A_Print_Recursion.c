#include <stdio.h>
void fun(int n, int i)
{
    if (i > n)
    {
        return;
    }
    printf("I love Recursion\n");
    fun(n, ++i);//ekhane i++ use kora jabe na, i++ mane holo i = i+1; orthat ekhane i++ ta i = i+1 hisebe jay mane age post hoy tarpor kaj hoy,age purono manti use kore tarpor new man ta use kore,ar ei recursive function e i++ korle post increment hobe orthat age i er ager man ti bar bar pathebe tarpor i+1 hobe but ekhane bar bar age i er ager man ta pathanor karone infinite loop e pore jabe tar turmineted hoye jabe; tai ekhane ++i korte hobe orthat age i er man barabe tarpor i pass korbe, othobe i+1 likhte hobe
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 1);

    return 0;
}