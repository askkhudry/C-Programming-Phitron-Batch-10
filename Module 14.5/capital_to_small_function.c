// return + parameter
#include <stdio.h>
char capital_to_small(char capital)
{
    char small = capital + 32;
    return small;
}
int main()
{
    char capital;
    scanf("%c", &capital);
    char small = capital_to_small(capital);
    printf("%c", small);

    return 0;
}

// // no_return + parameter
// #include <stdio.h>
// void capital_to_small(char capital)
// {
//     char small = capital + 32;
//     printf("%c", small);
//     return;
// }
// int main()
// {
//     char capital;
//     scanf("%c", &capital);
//     capital_to_small(capital);

//     return 0;
// }

// // no_return + no_parameter
// #include <stdio.h>
// void capital_to_small()
// {
//     char capital;
//     scanf("%c", &capital);
//     char small = capital + 32;
//     printf("%c", small);
//     return;
// }
// int main()
// {
//     capital_to_small();
//     return 0;
// }

// // return + no_parameter
// #include <stdio.h>
// char capital_to_small()
// {
//     char capital;
//     scanf("%c", &capital);
//     char small = capital + 32;

//     return small;
// }
// int main()
// {

//     char small = capital_to_small();
//     printf("%c", small);
//     return 0;
// }