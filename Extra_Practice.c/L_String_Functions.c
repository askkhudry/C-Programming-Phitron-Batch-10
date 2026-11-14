#include <stdio.h>
#include <string.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    // সাইজ একটু বড় রাখা নিরাপদ (যেমন N + 100) কারণ push_back দিয়ে সাইজ বাড়তে পারে
    char s[n + 100];
    scanf("%s", s);

    while (q--)
    {
        char type[20];
        scanf("%s", type);

        if (strcmp(type, "substr") == 0)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            // কোফোর্সের উদাহরণ অনুযায়ী l এবং r ছোট-বড় থাকতে পারে,
            // তাই চাইলে মিনিমাম-ম্যাক্সিমাম চেক করে নিতে পারো, তবে সাধারণত l <= r থাকে।
            int start = (l < r) ? l : r;
            int end = (l > r) ? l : r;

            for (int i = start - 1; i <= end - 1; i++)
            {
                printf("%c", s[i]);
            }
            printf("\n");
        }
        else if (strcmp(type, "sort") == 0)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            int start = (l < r) ? l : r;
            int end = (l > r) ? l : r;

            // তোমার বাবুল সর্ট লজিক (1-based থেকে 0-based কনভার்ட் করে)
            for (int i = start - 1; i < end - 1; i++)
            {
                for (int j = i + 1; j <= end - 1; j++)
                {
                    if (s[i] > s[j])
                    {
                        char temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
            }
        }
        else if (strcmp(type, "reverse") == 0)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            int start = (l < r) ? l : r;
            int end = (l > r) ? l : r;

            for (int i = start - 1, j = end - 1; i < j; i++, j--)
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        else if (strcmp(type, "pop_back") == 0)
        {
            int len = strlen(s);
            if (len > 0)
            {
                s[len - 1] = '\0';
            }
        }
        else if (strcmp(type, "back") == 0)
        {
            int len = strlen(s);
            if (len > 0)
            {
                printf("%c\n", s[len - 1]);
            }
        }
        else if (strcmp(type, "front") == 0)
        {
            if (strlen(s) > 0)
            {
                printf("%c\n", s[0]);
            }
        }
        else if (strcmp(type, "push_back") == 0)
        {
            char x;
            scanf(" %c", &x); // আগের নতুন লাইন ইগ্নোর করতে সামনে স্পেস দেওয়া হয়েছে
            int len = strlen(s);
            s[len] = x;
            s[len + 1] = '\0';
        }
        else if (strcmp(type, "print") == 0)
        {
            int pos;
            scanf("%d", &pos);
            printf("%c\n", s[pos - 1]);
        }
    }

    return 0;
}

// eita c++ diye korte hobe built in function diye!

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n, q;
//     scanf("%d %d", &n, &q);
//     char s[n + 5];
//     scanf("%s", s);

//     while (q--)
//     {
//         char type[1001];
//         scanf("%s", type);

//         if (strcmp(type, "substr") == 0)
//         {
//             int l, r;
//             scanf("%d %d", &l, &r);
//             for (int i = l - 1; i <= r - 1; i++)
//             {
//                 printf("%c", s[i]);
//             }
//             printf("\n");
//         }
//         else if (strcmp(type, "sort") == 0)
//         {
//             int l, r;
//             scanf("%d %d", &l, &r);
//             for (int i = l - 1; i < r - 1; i++)
//             {
//                 for (int j = i + 1; j <= r - 1; j++)
//                 {
//                     if (s[i] > s[j])
//                     {
//                         char temp = s[i];
//                         s[i] = s[j];
//                         s[j] = temp;
//                     }
//                 }
//             }
//         }
//         else if (strcmp(type, "reverse") == 0)
//         {
//             int l, r;
//             scanf("%d %d", &l, &r);
//             for (int i = l - 1, j = r - 1; i < j; i++, j--)
//             {
//                 char temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//         else if (strcmp(type, "pop_back") == 0)
//         {
//             s[strlen(s) - 1] = '\0';
//         }
//         else if (strcmp(type, "back") == 0)
//         {
//             printf("%c", s[strlen(s) - 1]);
//             printf("\n");
//         }
//         else if (strcmp(type, "front") == 0)
//         {
//             printf("%c", s[0]);
//             printf("\n");
//         }
//         else if (strcmp(type, "push_back") == 0)
//         {
//             char x;
//             scanf(" %c", &x);
//             s[strlen(s)] = x;
//             s[strlen(s) + 1] = '\0';
//         }
//         else if (strcmp(type, "print") == 0)
//         {
//             int pos;
//             scanf("%d", &pos);
//             printf("%c", s[pos - 1]);
//             printf("\n");
//         }
//     }

//     return 0;
// }