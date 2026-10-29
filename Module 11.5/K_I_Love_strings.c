#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int lens = strlen(s), lent = strlen(t), lenc = lens + lent;

        for (int i = 0; i < lenc; i++)
        {
            if(s[i]=='\0')
            {
                
            }
            printf("%c", s[i]);
            printf("%c", t[i]);
        }
        printf("\n");
    }
    return 0;
}