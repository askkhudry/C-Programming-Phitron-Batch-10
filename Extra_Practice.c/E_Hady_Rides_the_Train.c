#include <stdio.h>
int main()
{
    long long id;
    scanf("%lld", &id);

    long long row = id / 4;
    long long column;
    if (row % 2 == 0)
    {
        column = id % 4;
    }
    else
    {
        column = 3 - (id % 4);
    }
    printf("%lld %lld", row, column);

    return 0;
}