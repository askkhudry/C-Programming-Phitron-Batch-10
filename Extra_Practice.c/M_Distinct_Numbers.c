#include <stdio.h>

void distinct(int n, int a[])
{
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            count++;
        }
    }

    if (n == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d\n", count);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    distinct(n, a);
    return 0;
}
// void printArray(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};

//     printArray(arr, 5);

//     return 0;
// }