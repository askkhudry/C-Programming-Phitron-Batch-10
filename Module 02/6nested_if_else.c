#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("coxbazar jabo\n");
        if (taka >= 10000)
        {
            printf("saint martin jabo\n");
        }
        else
        {
            printf("saint martin jabo na\n");
        }
    }
    else
    {
        printf("jabo na\n");
    }

    return 0;
}