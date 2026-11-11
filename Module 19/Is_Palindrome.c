// #include <stdio.h>
// #include <string.h>
// int is_palindrome(char s[])
// {
//     int len = strlen(s);
//     int i = 0, j = len - 1;
//     while (i < j)
//     {
//         if (s[i] != s[j])
//         {
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     return 1;
// }
// int main()
// {
//     char s[1001];
//     scanf("%s", s);
//     int ans = is_palindrome(s);
//     if (ans == 1)
//     {
//         printf("Palindrome\n");
//     }
//     else
//     {
//         printf("Not Palindrome\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int is_palindrome(char s[], int n)
{
    int i = 0, j = n - 1;
    int ans = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            ans = 0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    int ans = is_palindrome(s, len);
    if (ans == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}