// #include <stdio.h>

// void fun(int a[])
// {
//     a[1] = 200; // ekhane fun function e change korle seta main function thekeo change hobe, jehetu a er moddhe main function er array er first index ta store ache tai a[1] koray array bujhteche je take 0 number index theke ek ghor samne jete hobe orthat 4 byte jog korte hobe and 4byte samne ba ek ghor samne giye 1 nuber index e change korbe
// }

// int main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     fun(a);
//     printf("%d", a[1]);
//     return 0;
// }

#include <stdio.h>

void fun(int a[], int n) // function theke array recieve korte array er name and array er size nite hoy
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
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
    fun(a, n); // function e array pathate array er name + array er size pathate hoy

    return 0;
}