// return + parameter
#include <stdio.h>
char small_to_capital(char small)
{
    char capital = small - 32;
    return capital;
}
int main()
{
    char small;
    scanf("%c", &small);
    char capital = small_to_capital(small);
    printf("%c", capital);

    return 0;
}

// // no_return + parameter
// #include <stdio.h>
// void small_to_capital(char small)
// {
//     char capital = small - 32;
//     printf("%c", capital);
//     return;
// }
// int main()
// {
//     char small;
//     scanf("%c", &small);
//     small_to_capital(small);

//     return 0;
// }

// // no_return + no_parameter
// #include <stdio.h>
// void small_to_capital()
// {
//     char small;
//     scanf("%c", &small);
//     char capital = small - 32;
//     printf("%c", capital);
//     return;
// }
// int main()
// {
//     small_to_capital();
//     return 0;
// }

// // return + no_parameter
// #include <stdio.h>
// char small_to_capital()
// {
//     char small;
//     scanf("%c", &small);
//     char capital = small - 32;

//     return capital;
// }
// int main()
// {

//     char capital = small_to_capital();
//     printf("%c", capital);
//     return 0;
// }