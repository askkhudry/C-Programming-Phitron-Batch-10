#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    char f1[101], s1[101];
    scanf("%s %s", f1, s1);
    char f2[101], s2[101];
    scanf("%s %s", f2, s2);

    int val = strcmp(s1, s2);//string compare function jodi 0 return kore tahole second name 2 ta soman ar jodi onno value return kore tahole soman hobe na ar tarao bhai hobe na!

    if (val == 0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <limits.h>
// int main()
// {
//     char f1[101], s1[101];
//     scanf("%s %s", f1, s1);
//     char f2[101], s2[101];
//     scanf("%s %s", f2, s2);

//     int flag = 1;

//     if (strlen(s1) == strlen(s2))
//     {
//         for (int i = 0; i < strlen(s1); i++)
//         {
//             if (s1[i] != s2[i])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//     }
//     else
//     {
//         flag = 0;
//     }

//     if (flag == 1)
//     {
//         printf("ARE Brothers\n");
//     }
//     else
//     {
//         printf("NOT\n");
//     }

//     return 0;
// }