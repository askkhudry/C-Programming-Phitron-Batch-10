#include <stdio.h>
int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int ans;

    if (s == '+')
        ans = a + b;
    else if (s == '-')
        ans = a - b;
    else if (s == '*')
        ans = a * b;

    if (ans == c)
        printf("Yes");
    else
        printf("%d", ans);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     char s, q;
//     scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

//     int sum = a + b;
//     int sub = a - b;
//     int mul = a * b;

//     if (s == '+')
//     {
//         if (sum == c)
//             printf("Yes");
//         else
//             printf("%d", sum);
//     }
//     else if (s == '-')
//     {
//         if (sub == c)
//             printf("Yes");
//         else
//             printf("%d", sub);
//     }
//     else if (s == '*')
//     {
//         if (mul == c)
//             printf("Yes");
//         else
//             printf("%d", mul);
//     }
//     return 0;
// }