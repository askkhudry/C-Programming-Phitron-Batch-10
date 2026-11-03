//return + parameter
#include <stdio.h>
int char_to_ascii(char c)
{
    int ascii = c;
    return ascii;
}
int main()
{
    char c;
    scanf("%c", &c);
    int ascii = char_to_ascii(c);
    printf("%d", ascii);

    return 0;
}


// // return + no_parameter
// #include <stdio.h>
// int char_to_ascii()
// {
//     char c;
//     scanf("%c", &c);
//     int ascii = c;
//     return ascii;
// }
// int main()
// {
//     int ascii = char_to_ascii();
//     printf("%d", ascii);

//     return 0;
// }


// // no_return + no_parameter
// #include <stdio.h>
// void char_to_ascii()
// {
//     char c;
//     scanf("%c", &c);
//     int ascii = c;
//     printf("%d", ascii);
//     return;
// }
// int main()
// {
//     char_to_ascii();
//     return 0;
// }


// // no_return + parameter
// #include <stdio.h>
// void char_to_ascii(char c)
// {

//     int ascii = c;
//     printf("%d", ascii);
//     return;
// }
// int main()
// {
//     char c;
//     scanf("%c", &c);
//     char_to_ascii(c);
//     return 0;
// }