#include <stdio.h>
int main()
{
    long long a, b;
    char c;
    scanf("%lld %c %lld", &a, &c, &b);

    if (c == '+')
        printf("%lld", a + b);
    else if (c == '-')
        printf("%lld", a - b);
    else if (c == '*')
        printf("%lld", a * b);
    else if (c == '/')
        printf("%lld", a / b);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     long long a, b;
//     char s;
//     scanf("%lld %c %lld", &a, &s, &b);

//     long long sum = a + b;
//     long long sub = a - b;
//     long long mul = a * b;
//     long long div = a / b;

//     if (s == '+')
//     {
//         printf("%lld", sum);
//     }
//     else if (s == '-')
//     {
//         printf("%lld", sub);
//     }
//     else if (s == '*')
//     {
//         printf("%lld", mul);
//     }
//     else if (s == '/')
//     {
//         printf("%lld", div);
//     }
//     return 0;
// }