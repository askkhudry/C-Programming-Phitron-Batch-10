#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mainn = n;
    int rev_num = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        rev_num = (rev_num * 10) + last_digit;
        n /= 10;
    }
    printf("%d\n", rev_num);
    if (rev_num == mainn)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}