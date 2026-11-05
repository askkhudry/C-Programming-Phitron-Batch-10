#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int len = strlen(s);
    char a[len + 1];
    for (int i = 0; i < len; i++)
    {
        a[(len - 1) - i] = s[i];
    }
    a[len] = '\0';
    int val = strcmp(a, s);
    if (val == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[1001];
    scanf("%s", s);

    int val = is_palindrome(s);
    if (val == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int is_palindrome(char s[])
// {
//     int len = strlen(s);
//     if (len == 1)
//     {
//         return 0;
//     }
//     char a[len];
//     for (int i = 0; i < len; i++)
//     {
//         a[(len - 1) - i] = s[i];
//     }
//     int val = strcmp(a, s);
//     return val;
// }
// int main()
// {
//     char s[1001];
//     scanf("%s", s);

//     int val = is_palindrome(s);
//     if (val == 0)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }
//     return 0;
// }