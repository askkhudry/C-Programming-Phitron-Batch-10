#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i == 5)
        {
            break;//ekhanei loop thamiye dite
        }
        printf("%d\n", i);
    }
    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}