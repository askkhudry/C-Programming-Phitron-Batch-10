#include <stdio.h>
int main()
{
    int k, s;
    scanf("%d %d", &k, &s);

    int count = 0;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int z = s - i - j;
            // z-এর মান যদি 0 থেকে k এর মধ্যে থাকে, তবে এটি একটি সম্ভাব্য সমাধান
            if (z >= 0 && z <= k)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int k, s;
//     scanf("%d %d", &k, &s);
//     int count = 0;
//     for (int i = 0; i <= k; i++)
//     {
//         int x = i;
//         for (int j = 0; j <= k; j++)
//         {
//             int y = j;
//             for (int l = 0; l <= k; l++)
//             {
//                 int z = l;
//                 if ((x + y + z) == s)
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
//     printf("%d", count);

//     return 0;
// }