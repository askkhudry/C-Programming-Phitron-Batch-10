//cpp diye submit korte hbe
#include <stdio.h>
void fun()
{
    int n;
    scanf("%d", &n);
    double a[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    double average = sum / (double)n;
    printf("%.7lf", average);
}
int main()
{
    fun();

    return 0;
}

// #include <stdio.h>
// void fun()
// {
//     int n;
//     scanf("%d", &n);
//     float a[10001];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%f", &a[i]);
//     }
//     float sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     float average = sum / (float)n;
//     printf("%.7f", average);
// }
// int main()
// {
//     fun();

//     return 0;
// }