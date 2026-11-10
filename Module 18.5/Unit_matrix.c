//unit matrix

#include <stdio.h>
int main()
{
    // matrix creat + input
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) // input neyar loop
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // unit_matrix = kono square matrix er mukkho korner upadan gulo/primary diagonal er upadan gulo 1 and baki sob upadan zero hole take unit matrix bole

    if (r == c) // chek kortechi eta square matrix kina
    {
        int count1 = 0; // dhori count 0 and eta ekta diagonal matrix
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j && a[i][j] != 0) // chek kortechi diagonal_matrix ki na
                {
                    count1++;
                    break;
                }
            }
        }

        int count5 = 0;
        if (count1 == 0) // count1 = 0 hole eta ekta diagonal matrix , ekhon dekhbo eta unit matrix kina, karon unit matrix hote hole age diagonal hote hobe
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (i == j && a[i][j] != 1) // chek kortechi praimary diagonal er sob upadan 1 kina, 1 na hole unit matrix hobe na
                    {
                        count5++;
                        break;
                    }
                }
            }
            if (count5 == 0)
            {
                printf("unit matrix\n");
            }
            else
            {
                printf("this is not a unit matrix\n");
            }
        }
        else
        {
            printf("this is not a unit matrix\n");
        }
    }
    else
    {
        printf("this is not a unit matrix\n");
    }
    return 0;
}