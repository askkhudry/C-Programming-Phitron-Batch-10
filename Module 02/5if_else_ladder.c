#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 130)
    {
        printf("burger khabo\n");
    }
    else if (taka >= 60)
    {
        printf("fuska khabo\n");
    }
    else
    {
        printf("kichui khabo na\n");
    }

    return 0;
}