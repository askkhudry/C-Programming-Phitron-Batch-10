#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int a2 = a, b2 = b, c2 = c;

    if (a2 > b2)
    {
        int temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a2 > c2)
    {
        int temp = a2;
        a2 = c2;
        c2 = temp;
    }
    if (b2 > c2)
    {
        int temp = b2;
        b2 = c2;
        c2 = temp;
    }
    printf("%d\n%d\n%d\n", a2, b2, c2);
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int A, B, C;
//     scanf("%d%d%d", &A, &B, &C);
//     if (A >= B && B >= C)
//     {
//         printf("%d\n", C);
//         printf("%d\n", B);
//         printf("%d\n", A);
//     }
//     else if (A >= C && C >= B)
//     {
//         printf("%d\n", B);
//         printf("%d\n", C);
//         printf("%d\n", A);
//     }
//     else if (C >= B && B >= A)
//     {
//         printf("%d\n", A);
//         printf("%d\n", B);
//         printf("%d\n", C);
//     }
//     else if (B >= C && C >= A)
//     {
//         printf("%d\n", A);
//         printf("%d\n", C);
//         printf("%d\n", B);
//     }
//     else if (C >= A && A >= B)
//     {
//         printf("%d\n", B);
//         printf("%d\n", A);
//         printf("%d\n", C);
//     }
//     else if (B >= A && A >= C)
//     {
//         printf("%d\n", C);
//         printf("%d\n", A);
//         printf("%d\n", B);
//     }
//     printf("\n%d\n%d\n%d\n", A, B, C);
//     return 0;
// }