#include <stdio.h>
void fun(int *a) //*a dileo addres point kore abar a[] dileo address point kore
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[5] = {6, 5, 3};

    fun(a);

    printf("\n");
    int array[4] = {1, 3, 4, 2};
    printf("%d\n", *array); // array er first value print hobe
    return 0;
}