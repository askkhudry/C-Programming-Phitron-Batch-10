#include <stdio.h>
void fun(int *a, int *b) // address asteche tai pointer variable nicchi,jekhane a,and b er addres store hobe
{
    int temp = *a; //*a dara a jei addres ta store korteche sei address er value ta temp e rakhtechi
    *a = *b;       // a jei address ta point korteche sei address er valu te giye b jei address ta point korteche sei address er value ta rakhtechi
    *b = temp;     // b jei address ta point korteche sei address temp e thaka a er address er value ta set kortechi
    return;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    fun(&a, &b); // a and b er address pathacchi jate swap ta function e kori ar seta main function thekeo pai
    printf("%d %d", a, b);
    return 0;
}

//// normal way
// #include <stdio.h>
// void fun()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("%d %d", a, b);
// }
// int main()
// {
//     fun();

//     return 0;
// }