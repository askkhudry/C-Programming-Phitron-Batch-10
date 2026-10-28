#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);

    int lena = strlen(a), lenb = strlen(b);

    printf("%d %d\n", lena, lenb);

    char c[21];

    strcpy(c, a);
    strcat(c, b);

    printf("%s\n", c);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[11], b[11];
//     scanf("%s %s", a, b);

//     int lena = strlen(a), lenb = strlen(b), lenc = lena + lenb;

//     printf("%d %d\n", lena, lenb);

//     char c[lenc + 1];
//     for (int i = 0; i < lena; i++)
//     {
//         c[i] = a[i];
//     }
//     for (int i = 0; i <= lenb; i++)
//     {
//         c[i + lena] = b[i];
//     }

//     printf("%s\n", c);

//     int temp = a[0];
//     a[0] = b[0];
//     b[0] = temp;

//     printf("%s %s", a, b);

//     return 0;
// }