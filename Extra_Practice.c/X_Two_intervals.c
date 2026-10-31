#include <stdio.h>
int main()
{
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    int start = (l1 > l2) ? l1 : l2;
    int end = (r1 < r2) ? r1 : r2;

    if (start > end)
        printf("-1");
    else
        printf("%d %d", start, end);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int l1, r1, l2, r2;
//     scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

//     // Start er maximum ebong End er minimum ber korchi
//     // int start = (l1 > l2) ? l1 : l2;
//     // int end = (r1 < r2) ? r1 : r2;

//     int start = 0;
//     if (l1 > l2)
//     {
//         start = l1;
//     }
//     else
//     {
//         start = l2;
//     }
//     int end = 0;
//     if (r1 < r2)
//     {
//         end = r1;
//     }
//     else
//     {
//         end = r2;
//     }
//     // printf("start = %d\nend = %d\n", start, end);

//     // Jodi start, end er cheye boro hoy tahole kono intersection nei
//     if (start > end)
//     {
//         printf("-1\n");
//     }
//     else
//     {
//         printf("%d %d\n", start, end);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int l1, r1, l2, r2;
//     scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

//     if (r1 < l2 || r2 < l1)
//         printf("-1");

//     else if (l1 <= l2 && r1 <= r2)
//         printf("%d %d", l2, r1);
//     else if (l2 <= l1 && r2 <= r1)
//         printf("%d %d", l1, r2);
//     else if (l2 <= l1 && r1 <= r2)
//         printf("%d %d", l1, r1);
//     else if (l1 <= l2 && r2 <= r1)
//         printf("%d %d", l2, r2);
//     return 0;
// }