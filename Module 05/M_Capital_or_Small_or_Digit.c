#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X < 65)
    {
        printf("IS DIGIT\n");
    }
    else if (X < 97)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (X >= 97)
    {
        printf("ALPHA\nIS SMALL\n");
    }

    return 0;
}