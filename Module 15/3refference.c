#include <stdio.h>
int main()
{
    int a;

    //value theke address e jacchi, tai etake refference bole
    scanf("%d", &a);//ekhane &a dara bujhay je scanf er maddhome input nicchi , input ta a er address e giye rakhbo , mane a jei address e ache sei address er valu er jaygay input nibo;

    printf("%d", a);

    return 0;
}