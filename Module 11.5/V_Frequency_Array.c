#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    int fre[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        fre[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int fre[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         fre[i] = 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         fre[a[i]]++;
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         printf("%d\n", fre[i]);
//     }

//     return 0;
// }