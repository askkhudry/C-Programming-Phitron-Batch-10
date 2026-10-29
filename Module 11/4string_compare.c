#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    // built in function
    int val = strcmp(a, b);
    if (val < 0)
    {
        printf("a is smaller");
    }
    else if (val == 0)
    {
        printf("equal");
    }
    else if (val > 0)
    {
        printf("b is smaller");
    }
    
    // manualy compare
    //  int i = 0;
    //  while (1)
    //  {

    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("equal\n");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("a is smaller\n");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("b is smaller\n");
    //         break;
    //     }

    //     else if (a[i] < b[i])
    //     {
    //         printf("a is smaller\n");
    //         break;
    //     }
    //     else if (b[i] < a[i])
    //     {
    //         printf("b is smaller\n");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    return 0;
}