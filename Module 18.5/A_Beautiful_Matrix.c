#include <stdio.h>
int main()
{
    int a[5 + 1][5 + 1];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int index_i, index_j;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                index_i = i;
                index_j = j;
                break;
            }
        }
    }
    int third_index_i = abs(index_i - 3);
    int third_index_j = abs(index_j - 3);

    int ans = third_index_i + third_index_j;
    
    printf("%d\n", ans);
    return 0;
}