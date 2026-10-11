#include <stdio.h>
int main()
{
    while (1)
    {
        int X;
        scanf("%d", &X);
        if (X == 1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
            continue;
        }
    }

    return 0;
}