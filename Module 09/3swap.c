#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("%d %d\n", a, b);

    // //evabe swap hoy na,cz b er man a te gele a er man haray jacche , tai sothik niom holo temp variable neya, ete kore kkono man hariye jay na!
    // a = b;
    // b = a;
    // printf("%d %d", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
    return 0;
}