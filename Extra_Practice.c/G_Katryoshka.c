#include <stdio.h>
int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long katroyoshkas = 0; // koyta murti banao jabe setar jonno variable
    long long x = n;            // dhori sob theke choto n;ar n ke rekhe dilam x er moddhe

    if (x > m) // chek kortechi ke choto,jodi choto hoy x er theke...
    {
        x = m; // x er moddhe choto value ta rakhtechi
    }
    if (x > k) // chek kortechi ke choto,jodi choto hoy x er theke...
    {
        x = k; // x er moddhe choto value ta rakhtechi
    }
    // ekhon chek kora sesh , sob theke choto value ta ekhon x, ar x joto ta thik tototai murti ba katroyoshkas banano jabe;

    katroyoshkas += x; // x ta murti banate parbo

    // sobar theke x biyog dicchi, karon x poriman murti banao sesh

    n -= x;
    // m -= x;
    k -= x;

    // ei stage theke ar m ba mukh lagbe na, karon ei stage e jodi mukh sesh hoy tahole pore chokh 2 ta kore lagbe ar body ekta kore lagbe, ar jodi mukh sesh na hoy tahole body ba eyes sesh hobe, ar body ba eyes sesh hole ar ektao banao jabe na, tai amra ekhanei mouth ba moukh ba m ar count korbo na

    n /= 2; // n theke 2 vag dicchi karon eyes 2 ta kore lagbe

    // ekhon shudhu chokh ar body thakle tader moddhe je sob theke kom ache sei poriman ar murti banao jabe , tai je kom ache takei ekhom katroyoshkas er sathe jog korbo
    if (n < k)
    {
        katroyoshkas += n;
    }
    else
    {
        katroyoshkas += k;
    }

    printf("%lld", katroyoshkas);
    return 0;
}