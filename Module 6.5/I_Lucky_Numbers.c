#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int first = N / 10;
    int last = N % 10;
    if (last == 0 || first % last == 0 || last % first == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int first = a / 10;
//     int last = a % 10;
//     if (first == 0 || last == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         if (first % last == 0 || last % first == 0)
//             printf("YES");
//         else
//             printf("NO");
//     }

//     return 0;
// }
