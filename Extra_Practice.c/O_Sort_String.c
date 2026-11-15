#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int fre[26] = {0};
    for (int i = 1; i <= n; i++)
    {
        char ch;
        scanf(" %c", &ch);
        fre[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (fre[i] > 0)
        {
            printf("%c", i + 'a');
            fre[i]--;
        }
    }
    printf("\n");
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     char s[n + 1];
//     scanf("%s", s);
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (s[i] > s[j])
//             {
//                 char temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     printf("%s", s);

//     return 0;
// }