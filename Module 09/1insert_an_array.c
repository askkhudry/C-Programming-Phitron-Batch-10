#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a + 1];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);

    for (int i = a; i > idx; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[idx] = val;

    for (int i = 0; i <= a; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}