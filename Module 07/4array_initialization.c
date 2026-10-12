#include <stdio.h>
int main()
{
    int x = 10;                       // declear and initialization
    int ar[5] = {10, 20, 30, 40, 50}; // declear and initialization
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }

    printf("\n");
    int arr[5] = {10, 20}; // declear and initialization
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    int arrr[5] = {0}; //fixt size array er jonno kaj kore// declear and initialization
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arrr[i]);
    }
    return 0;
}