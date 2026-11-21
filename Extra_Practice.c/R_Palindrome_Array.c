#include <stdio.h>
void fun(int a[], int n, int start, int end)
{
    if (start >= end)
    {
        printf("YES\n");
        return;
    }
    if (a[start] != a[end])
    {
        printf("NO\n");
        return;
    }
    fun(a, n, start + 1, end - 1);
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

    fun(a, n, 0, n - 1);

    // using a single loop to check for palindrome
    //  int isPalindrome = 1; // Assume the array is a palindrome
    //  for (int i = 0; i < n / 2; i++)
    //  {
    //      if (a[i] != a[n - 1 - i])
    //      {
    //          isPalindrome = 0; // Not a palindrome
    //          break;
    //      }
    //  }

    // if (isPalindrome)
    // {
    //     printf("YES\n");
    // }
    // else
    // {
    //     printf("NO\n");
    // }

    return 0;
}