#include <stdio.h>
void fun()
{
    int n;
    scanf("%d", &n);
    int c[n + n];
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[n + i] = a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        c[i] = b[i];
    }

    for (int i = 0; i < n + n; i++)
    {
        printf("%d ", c[i]);
    }
}
int main()
{
    fun();

    return 0;
}

// #include <stdio.h>
// void fun()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int b[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     int len = n + n;
//     int c[len];
//     for (int i = 0; i < n; i++)
//     {
//         c[i] = b[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         c[n + i] = a[i];
//     }
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", c[i]);
//     }
// }
// int main()
// {
//     fun();

//     return 0;
// }