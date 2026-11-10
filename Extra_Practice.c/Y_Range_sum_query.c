#include <stdio.h>
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    long long a[n + 1];
    long long prefix[n + 1];
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        prefix[i] = prefix[i - 1] + a[i]; // ekhane prefix array te protita index e tar ager sob falue jog kore rakha hocche
    }
    while (q--)
    {
        long long l, r;
        scanf("%lld %lld", &l, &r);
        long long sumation = prefix[r] - prefix[l-1];
        printf("%lld\n", sumation);
    }

    return 0;
}

// main logic but evabe kora jabe na, tle ase, tai prefix sum diye korte hobe
//  #include <stdio.h>
//  int main()
//  {
//      int n, q;
//      scanf("%d %d", &n, &q);
//      int a[n + 1];
//      for (int i = 1; i <= n; i++)
//      {
//          scanf("%d", &a[i]);
//      }
//      while (q--)
//      {
//          int l, r;
//          scanf("%d %d", &l, &r);
//          long long sumation = 0;
//          for (int i = l; i <= r; i++)
//          {
//              sumation += a[i];
//          }
//          printf("%lld\n", sumation);
//      }

//     return 0;
// }