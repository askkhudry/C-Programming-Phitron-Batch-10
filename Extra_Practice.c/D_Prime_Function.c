#include <stdio.h>
#include <math.h>
void fun()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int prime = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1 && n != 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
int main()
{
    fun();
    return 0;
}