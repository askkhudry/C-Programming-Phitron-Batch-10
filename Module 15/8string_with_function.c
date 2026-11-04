#include <stdio.h>
void fun(char s[])
{
    printf("%s\n", s);
    printf("%d", strlen(s));
}
int main()
{
    char s[10];
    scanf("%s", s); // ekhane & amparcent sign na dileo hoy karon string ekta charecter array , ar array te muloto first index er addres store thake , jehetu address store ache tai ar & sign na dileo kaj kore

    fun(s); // string pathate array er size na dileo chole , jodi function e array er size proyojon hoy tobe strlen(s) diye size nite parbo karon string er super power ache ar array o muloto address store kore tai sohojei size ber kora jay, ejonno string pass korte size pathate hoy na

    return 0;
}