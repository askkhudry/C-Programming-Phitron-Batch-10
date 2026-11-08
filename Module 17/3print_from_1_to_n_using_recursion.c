#include <stdio.h>
void fun(int n)
{
    if (n > 5)
    {
        return;
    }

    printf("%d\n", n);
    fun(n + 1);
}
int main()
{
    int n = 1;
    // scanf("%d", &n);
    fun(n);

    return 0;
}

// // print from n to 1
// #include <stdio.h>
// void fun(int n)
// {
//     if (n > 5)
//     {
//         return;
//     }
//     fun(n + 1);
//     printf("%d\n", n);
// }
// int main()
// {
//     int n = 1;
//     // scanf("%d", &n);
//     fun(n);
//     return 0;
// }