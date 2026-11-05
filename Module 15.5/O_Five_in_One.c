#include <stdio.h>
void maximum(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The maximum number : %d\n", max);
}

void minimum(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("The minimum number : %d\n", min);
}

void prime_numbers(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int prime = 1;
        if (a[i] == 1)
        {
            prime = 0;
        }
        for (int j = 2; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            count++;
        }
    }
    printf("The number of prime numbers : %d\n", count);
}

void palindrome_numbers(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int num = a[i];
        int palindrome = 0;
        while (num != 0)
        {
            int last_digit = num % 10;
            palindrome = (palindrome * 10) + last_digit;
            num /= 10;
        }
        if (temp == palindrome)
        {
            count++;
        }
    }
    printf("The number of palindrome numbers : %d\n", count);
}

void maximum_number_of_divisors(int a[], int n)
{
    int max_num = a[0];
    int max_divisor = 0;
    for (int i = 0; i < n; i++)
    {
        int divisor = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                divisor++;
            }
        }
        if (max_divisor < divisor)
        {
            max_num = a[i];
            max_divisor = divisor;
        }
        else if (max_divisor == divisor)
        {
            if (max_num < a[i])
            {
                max_num = a[i];
            }
        }
    }
    printf("The number that has the maximum number of divisors : %d\n", max_num);
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
    maximum(a, n);
    minimum(a, n);
    prime_numbers(a, n);
    palindrome_numbers(a, n);
    maximum_number_of_divisors(a, n);
    return 0;
}