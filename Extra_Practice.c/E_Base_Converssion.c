
////evabe korleo accept hoye jabe
// #include <stdio.h>
//  void fun(long long n)
//  {
//      if (n == 0)
//      {
//          return;
//      }
//      fun(n / 2);
//      putchar((n % 2) + '0');
//  }

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long n;
//         scanf("%lld", &n);
//         fun(n);
//         putchar('\n');
//     }
//     return 0;
// }

// evabe korleo accept hobe
//  #include <stdio.h>
//  void fun(long long n)
//  {
//      if (n == 0)
//      {
//          return;
//      }
//      fun(n / 2);
//      putchar((n % 2) + '0');
//  }

// int main()
// {
//     int t;
//     if (scanf("%d", &t) != 1)
//         return 0;

//     while (t--)
//     {
//         long long n;
//         if (scanf("%lld", &n) != 1)
//             break;

//         if (n == 0)
//         {
//             putchar('0');
//         }
//         else
//         {
//             fun(n);
//         }
//         putchar('\n');
//     }
//     return 0;
// }

////evabe korle tle khabe karon ekhane onek input thakte pare ejonnoi arki evabe kora jabe na
// #include <stdio.h>
// void fun(long long n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     long long reminder = n % 2;
//     fun(n / 2);
//     printf("%lld", reminder);
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long n;
//         scanf("%lld", &n);
//         fun(n);
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// void fun(long long n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     fun(n / 2);
//     printf("%c", (n % 2) + '0');
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long n;
//         scanf("%lld", &n);
//         fun(n);
//         printf("\n");
//     }

//     return 0;
// }